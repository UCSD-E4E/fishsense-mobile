{
  description = "FishSense Mobile — reproducible dev environment (Flutter + Rust bridge)";

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
    rust-overlay = {
      url = "github:oxalica/rust-overlay";
      inputs.nixpkgs.follows = "nixpkgs";
    };
    flake-utils.url = "github:numtide/flake-utils";
  };

  # iOS-focused for now. Android is a stub at the bottom — see the commented
  # devShells.android block when the Android app lands.
  outputs = { self, nixpkgs, rust-overlay, flake-utils }:
    flake-utils.lib.eachSystem [ "aarch64-darwin" "x86_64-darwin" ] (system:
      let
        overlays = [ (import rust-overlay) ];
        pkgs = import nixpkgs {
          inherit system overlays;
          config.allowUnfree = true; # needed later for androidenv SDK/NDK
        };

        # Rust channel + Apple targets come straight from the pinned toolchain file.
        rustToolchain =
          pkgs.rust-bin.fromRustupToolchainFile ./rust-bridge/rust-toolchain.toml;

        # nixpkgs' flutter bundles engine artifacts for every platform. For iOS
        # work we only need the Apple ones — dropping "android" avoids a large
        # (and, from the public cache, flaky) download. Add "android" back when
        # the Android devShell lands.
        flutterIos = pkgs.flutter.override {
          supportedTargetFlutterPlatforms = [ "universal" "ios" "macos" ];
        };
      in
      {
        # mkShellNoCC: do NOT let Nix inject its own clang/cctools/apple-sdk.
        # iOS cross-compilation, xcodebuild, and pod install must all use the
        # *system* Xcode toolchain (Nix's Apple SDK has no iphoneos SDK). Nix
        # still pins the version-managed, non-Apple tooling below.
        devShells.default = pkgs.mkShellNoCC {
          name = "fishsense-ios";

          # Everything up to the Apple wall. Xcode itself is NOT here — it is
          # proprietary and not redistributable, so install it from the App Store.
          packages = with pkgs; [
            rustToolchain
            flutterIos       # pinned by nixpkgs rev; iOS/macOS artifacts only
            rust-cbindgen    # replaces `cargo install cbindgen` in the Makefile
            uv               # runs rust-bridge/build.py (downloads xcframeworks)
            cmake
            pkg-config
            openblas         # fishsense.rs -> ndarray-linalg -> openblas-src
            llvmPackages.libclang
            cocoapods
            ruby             # Fastlane (Gemfile)
            bundler
          ];

          # bindgen (ort crate) needs libclang.
          LIBCLANG_PATH = "${pkgs.llvmPackages.libclang.lib}/lib";

          # openblas-src's build script probes pkg-config for openblas and only
          # falls back to shelling out to `brew` if that fails. pkg-config
          # refuses on cross-compiles (the iOS targets) unless this is set, so
          # setting it lets the Nix-provided openblas satisfy the build without
          # any Homebrew dependency.
          PKG_CONFIG_ALLOW_CROSS = "1";
          PKG_CONFIG_PATH = "${pkgs.openblas.dev}/lib/pkgconfig";

          shellHook = ''
            # Defer all Apple-toolchain resolution to the system Xcode. If any
            # Nix Apple SDK env leaked in, drop it so xcrun/xcodebuild/clang use
            # /Applications/Xcode.app and its iphoneos SDK.
            unset SDKROOT
            if [ -d /Applications/Xcode.app/Contents/Developer ]; then
              export DEVELOPER_DIR=/Applications/Xcode.app/Contents/Developer
            else
              unset DEVELOPER_DIR
            fi
            # System Apple tools ahead of anything Nix might provide.
            export PATH="/usr/bin:$PATH"

            echo "── FishSense Mobile devShell (iOS) ──"
            echo "  rust    : $(rustc --version 2>/dev/null)"
            echo "  flutter : $(flutter --version 2>/dev/null | head -1)"
            echo "  xcode   : $(xcodebuild -version 2>/dev/null | head -1 || echo 'NOT FOUND — install from App Store')"
            echo "  clang   : $(command -v cc)  (should be /usr/bin/cc)"
            echo ""
            echo "  Build iOS:"
            echo "    cd rust-bridge && make && cd .."
            echo "    flutter pub get"
            echo "    (cd ios && pod install)"
            echo "    flutter build ios --release --no-codesign"
          '';
        };

        # ─────────────────────────────────────────────────────────────────
        # Android devShell — STUB for the future Android version.
        #
        # Unlike iOS, Android has no proprietary-toolchain wall: the SDK/NDK
        # come from nixpkgs `androidenv` and this shell can build on Linux CI
        # too. Flesh out when Android app code exists.
        #
        # devShells.android = pkgs.mkShell {
        #   name = "fishsense-android";
        #   packages = with pkgs; [
        #     rustToolchain  # add android targets to rust-toolchain.toml:
        #                    #   aarch64-linux-android, armv7-linux-androideabi,
        #                    #   x86_64-linux-android
        #     flutter
        #     (pkgs.androidenv.composeAndroidPackages {
        #       platformVersions = [ "34" ];
        #       buildToolsVersions = [ "34.0.0" ];
        #       includeNDK = true;
        #     }).androidsdk
        #     jdk17
        #     gradle
        #   ];
        # };
        # ─────────────────────────────────────────────────────────────────
      });
}

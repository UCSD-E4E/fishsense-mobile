# shellcheck shell=bash
# Sourced by the Nix devShell (see flake.nix). Makes Flutter's engine framework
# writable so signed iOS/macOS *device* builds can `codesign --force` it.
#
# Why this is needed
#   nixpkgs ships Flutter's engine artifacts in the read-only Nix store.
#   Flutter's iOS build rsyncs Flutter.framework out of $FLUTTER_ROOT and then
#   runs `codesign --force` on the copy. `rsync -av` preserves the source's
#   read-only mode, so codesign fails with "…/Flutter: Permission denied".
#   This is NOT fixable by upgrading Flutter: even Flutter master's rsync has no
#   `--chmod` and no chmod step (flutter#147142). The source framework simply has
#   to be writable. (CI is unaffected because it builds with --no-codesign.)
#
# How this fixes it
#   Build a mirror of the SDK that is byte-for-byte the store SDK — which already
#   works for everything else — via symlinks into the store, EXCEPT the engine
#   artifacts directory, which is materialized as a writable real copy. Point
#   FLUTTER_ROOT at the mirror; the Nix `flutter` wrapper honors an externally
#   set FLUTTER_ROOT (`${FLUTTER_ROOT-<store>}`), so the rsync source becomes the
#   writable copy. The mirror is cached under XDG cache, keyed by the immutable
#   store path, so it is built once per Flutter version.

# Only meaningful when a Nix-provided flutter is on PATH.
if command -v flutter >/dev/null 2>&1; then
  _fw_store="$(cd "$(dirname "$(command -v flutter)")/.." && pwd -P)"
  # Only mirror a read-only, store-provided SDK.
  case "$_fw_store" in
    /nix/store/*)
      _fw_root="${XDG_CACHE_HOME:-$HOME/.cache}/flutter-writable-engine"
      _fw_mirror="$_fw_root/$(basename "$_fw_store")"
      _fw_shadow="bin/cache/artifacts/engine"

      if [ ! -e "$_fw_mirror/.ready" ]; then
        echo "  flutter: building writable engine mirror (one-time, ~1GB copy)…"
        rm -rf "$_fw_mirror"
        mkdir -p "$_fw_mirror"

        # Recreate each ancestor dir of the shadowed path as a real directory,
        # symlinking every *sibling* back to the read-only store as we descend.
        _fw_walk() { # $1 = reldir ("" == SDK root), $2 = child to leave real
          local reldir="$1" skip="$2"
          local abssrc="$_fw_store${reldir:+/$reldir}"
          local absmir="$_fw_mirror${reldir:+/$reldir}"
          mkdir -p "$absmir"
          local entry name
          for entry in "$abssrc"/* "$abssrc"/.[!.]*; do
            [ -e "$entry" ] || continue          # skip non-matching globs
            name="$(basename "$entry")"
            [ "$name" = "$skip" ] && continue     # leave the shadow path for the next level
            ln -sfn "$entry" "$absmir/$name"
          done
        }
        _fw_walk ""                    bin
        _fw_walk "bin"                 cache
        _fw_walk "bin/cache"           artifacts
        _fw_walk "bin/cache/artifacts" engine
        unset -f _fw_walk

        # Materialize the engine as a writable real copy (follow store symlinks).
        cp -RL "$_fw_store/$_fw_shadow" "$_fw_mirror/$_fw_shadow"
        chmod -R u+w "$_fw_mirror/$_fw_shadow"
        touch "$_fw_mirror/.ready"

        # Prune mirrors left over from older Flutter versions.
        for _fw_old in "$_fw_root"/*; do
          [ "$_fw_old" = "$_fw_mirror" ] || rm -rf "$_fw_old" 2>/dev/null
        done
      fi

      export FLUTTER_ROOT="$_fw_mirror"
      ;;
  esac
  unset _fw_store _fw_root _fw_mirror _fw_shadow _fw_old
fi

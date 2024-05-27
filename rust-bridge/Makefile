nightly_version = 2024-05-01
arch = `./get_arch`

all: framework

framework: header macos ios
	@$(RM) -rf ./FishSenseRS.xcframework
	@xcodebuild -create-xcframework \
		-library libs/libfishsense-macos.a \
		-headers ./include/ \
		-library libs/libfishsense-ios-sim.a \
		-headers ./include/ \
		-library libs/libfishsense-maccatalyst.a \
		-headers ./include/ \
		-library libs/libfishsense-ios.a \
		-headers ./include/ \
		-output FishSenseRS.xcframework

header: toolchain
	@cbindgen --lang c --output include/fishsense.h

macos: toolchain
	@mkdir -p ./libs
	@cargo build --release --lib --target aarch64-apple-darwin
	@cargo build --release --lib --target x86_64-apple-darwin
	@cargo +nightly-$(nightly_version)-$(arch)-apple-darwin build -Z build-std --release --lib --target aarch64-apple-ios-macabi
	@cargo +nightly-$(nightly_version)-$(arch)-apple-darwin build -Z build-std --release --lib --target x86_64-apple-ios-macabi
	@$(RM) -f libs/libfishsense-macos.a
	@$(RM) -f libs/libfishsense-maccatalyst.a
	@lipo -create -output libs/libfishsense-macos.a \
             target/aarch64-apple-darwin/release/libfishsense.a \
             target/x86_64-apple-darwin/release/libfishsense.a
	@lipo -create -output libs/libfishsense-maccatalyst.a \
             target/aarch64-apple-ios-macabi/release/libfishsense.a \
             target/x86_64-apple-ios-macabi/release/libfishsense.a

ios: toolchain
	@mkdir -p ./libs
	@cargo build --release --lib --target aarch64-apple-ios
	@cargo build --release --lib --target aarch64-apple-ios-sim
	@cargo build --release --lib --target x86_64-apple-ios
	@$(RM) -f libs/libfishsense-ios.a
	@$(RM) -f libs/libfishsense-ios-sim.a
	@cp target/aarch64-apple-ios/release/libfishsense.a libs/libfishsense-ios.a
	@lipo -create -output libs/libfishsense-ios-sim.a \
             target/aarch64-apple-ios-sim/release/libfishsense.a \
             target/x86_64-apple-ios/release/libfishsense.a

toolchain:
	@cargo install cbindgen
	@rustup component add rust-src --toolchain nightly-$(nightly_version)-$(arch)-apple-darwin

clean: toolchain
	@$(RM) -rf ./target
	@$(RM) -rf ./libs
	@$(RM) -f ./include/fishsense.h
	@$(RM) -rf ./FishSenseRS.xcframework
	

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

macos: toolchain onnxruntime_macos
	@mkdir -p ./libs
	@cargo build --release --lib --target aarch64-apple-darwin
	@cargo build --release --lib --target x86_64-apple-darwin

	@ORT_LIB_LOCATION=./third_party/lib/onnxruntime/iphonesimulator/arm64 cargo +nightly-$(nightly_version)-$(arch)-apple-darwin build -Z build-std --release --lib --target aarch64-apple-ios-macabi
	@ORT_LIB_LOCATION=./third_party/lib/onnxruntime/iphonesimulator/x86_64 cargo +nightly-$(nightly_version)-$(arch)-apple-darwin build -Z build-std --release --lib --target x86_64-apple-ios-macabi
	@$(RM) -f libs/libfishsense-macos.a
	@$(RM) -f libs/libfishsense-maccatalyst.a
	@lipo -create -output libs/libfishsense-macos.a \
             target/aarch64-apple-darwin/release/libfishsense.a \
             target/x86_64-apple-darwin/release/libfishsense.a
	@lipo -create -output libs/libfishsense-maccatalyst.a \
             target/aarch64-apple-ios-macabi/release/libfishsense.a \
             target/x86_64-apple-ios-macabi/release/libfishsense.a

ios: toolchain onnxruntime_ios
	@mkdir -p ./libs
	@ORT_LIB_LOCATION=./third_party/lib/onnxruntime/iphoneos/arm64 cargo build --release --lib --target aarch64-apple-ios
	@ORT_LIB_LOCATION=./third_party/lib/onnxruntime/iphonesimulator/arm64 cargo build --release --lib --target aarch64-apple-ios-sim
	@ORT_LIB_LOCATION=./third_party/lib/onnxruntime/iphonesimulator/x86_64 cargo build --release --lib --target x86_64-apple-ios
	@$(RM) -f libs/libfishsense-ios.a
	@$(RM) -f libs/libfishsense-ios-sim.a
	@cp target/aarch64-apple-ios/release/libfishsense.a libs/libfishsense-ios.a
	@lipo -create -output libs/libfishsense-ios-sim.a \
             target/aarch64-apple-ios-sim/release/libfishsense.a \
             target/x86_64-apple-ios/release/libfishsense.a

toolchain:
	@cargo install cbindgen
	@rustup component add rust-src --toolchain nightly-$(nightly_version)-$(arch)-apple-darwin
	@brew install opencv llvm cmake # pipx protobuf
	# @pipx install poetry

onnxruntime_macos: onnxruntime_simulator

onnxruntime_ios: onnxruntime_simulator ./third_party/lib/onnxruntime/iphoneos/arm64/Release/Release-iphoneos/libonnxruntime.dylib

./third_party/lib/onnxruntime/iphoneos/arm64/Release/Release-iphoneos/libonnxruntime.dylib:
	@mkdir -p ./third_party/lib/onnxruntime/iphoneos/arm64
	@./third_party/onnxruntime/build.sh --config Release \
		--use_xcode \
		--ios \
		--apple_sysroot iphoneos \
		--osx_arch arm64 \
		--apple_deploy_target 14.0 \
		--skip_tests \
		--use_coreml \
		--parallel \
		--build_dir third_party/lib/onnxruntime/iphoneos/arm64

onnxruntime_simulator: ./third_party/lib/onnxruntime/iphonesimulator/arm64/Release/Release-iphonesimulator/libonnxruntime.dylib ./third_party/lib/onnxruntime/iphonesimulator/x86_64/Release/Release-iphonesimulator/libonnxruntime.dylib

./third_party/lib/onnxruntime/iphonesimulator/arm64/Release/Release-iphonesimulator/libonnxruntime.dylib:
	@mkdir -p ./third_party/lib/onnxruntime/iphonesimulator/arm64
	@./third_party/onnxruntime/build.sh --config Release \
		--use_xcode \
		--ios \
		--apple_sysroot iphonesimulator \
		--osx_arch arm64 \
		--apple_deploy_target 14.0 \
		--skip_tests \
		--use_coreml \
		--parallel \
		--build_dir third_party/lib/onnxruntime/iphonesimulator/arm64

./third_party/lib/onnxruntime/iphonesimulator/x86_64/Release/Release-iphonesimulator/libonnxruntime.dylib:
	@mkdir -p ./third_party/lib/onnxruntime/iphonesimulator/x86_64
	@./third_party/onnxruntime/build.sh --config Release \
		--use_xcode \
		--ios \
		--apple_sysroot iphonesimulator \
		--osx_arch x86_64 \
		--apple_deploy_target 14.0 \
		--skip_tests \
		--use_coreml \
		--parallel \
		--build_dir third_party/lib/onnxruntime/iphonesimulator/x86_64

clean: toolchain
	#@cd ./third_party/onnxruntime; git clean -xfd
	@$(RM) -rf ./target
	@$(RM) -rf ./libs
	@$(RM) -f ./include/fishsense.h
	@$(RM) -rf ./FishSenseRS.xcframework
	@$(RM) -rf ./third_party/lib
	

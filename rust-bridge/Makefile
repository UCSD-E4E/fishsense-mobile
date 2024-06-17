nightly_version = 2024-05-01
arch = `./get_arch`
onnxruntime_location = ./third_party/lib/onnxruntime
opencv_location = ./third_party/lib/opencv
opencv_realpath = `realpath $(opencv_location)`

export OPENCV_LINK_LIBS = "opencv2.framework"
# export OPENCV_LINK_PATHS = $(opencv_location)/opencv2.xcframework/ios-arm64_x86_64-simulator
# export OPENCV_INCLUDE_PATHS = $(opencv_location)/opencv2.xcframework/ios-arm64_x86_64-simulator

all: framework

framework: header ios opencv #macos
	@$(RM) -rf ../Swift/Frameworks/FishSenseRS.xcframework
	@xcodebuild -create-xcframework \
		-library libs/libfishsense-ios-sim.a \
		-headers ./include/ \
		-library libs/libfishsense-ios.a \
		-headers ./include/ \
		-output ../Swift/Frameworks/FishSenseRS.xcframework
		# -library libs/libfishsense-macos.a \
		# -headers ./include/ \
		# -library libs/libfishsense-maccatalyst.a \
		# -headers ./include/ \
	@$(RM) -rf ../Swift/Frameworks/opencv2.xcframework
	@cp -r $(opencv_location)/opencv2.xcframework ../Swift/Frameworks/

header: toolchain
	@cbindgen --lang c --output include/fishsense.h

# macos: toolchain onnxruntime_macos opencv
	# @mkdir -p ./libs
	# @OPENCV_LINK_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator OPENCV_INCLUDE_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator ORT_LIB_LOCATION=$(onnxruntime_location)/iphonesimulator/arm64 cargo +nightly-$(nightly_version)-$(arch)-apple-darwin build -Z build-std --release --lib --target aarch64-apple-ios-macabi
	# @OPENCV_LINK_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator OPENCV_INCLUDE_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator ORT_LIB_LOCATION=$(onnxruntime_location)/iphonesimulator/x86_64 cargo +nightly-$(nightly_version)-$(arch)-apple-darwin build -Z build-std --release --lib --target x86_64-apple-ios-macabi
	# @cargo build --release --lib --target aarch64-apple-darwin
	# @cargo build --release --lib --target x86_64-apple-darwin
	# @$(RM) -f libs/libfishsense-macos.a
	# @$(RM) -f libs/libfishsense-maccatalyst.a
	# @lipo -create -output libs/libfishsense-macos.a \
    #          target/aarch64-apple-darwin/release/libfishsense.a \
    #          target/x86_64-apple-darwin/release/libfishsense.a
	# @lipo -create -output libs/libfishsense-maccatalyst.a \
    #          target/aarch64-apple-ios-macabi/release/libfishsense.a \
    #          target/x86_64-apple-ios-macabi/release/libfishsense.a

ios: toolchain onnxruntime_ios opencv
	@mkdir -p ./libs
	@OPENCV_LINK_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64 OPENCV_INCLUDE_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64 ORT_LIB_LOCATION=$(onnxruntime_location)/iphoneos/arm64 cargo build --release --lib --target aarch64-apple-ios
	@OPENCV_LINK_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator OPENCV_INCLUDE_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator ORT_LIB_LOCATION=$(onnxruntime_location)/iphonesimulator/arm64 cargo build --release --lib --target aarch64-apple-ios-sim
	@OPENCV_LINK_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator OPENCV_INCLUDE_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator ORT_LIB_LOCATION=$(onnxruntime_location)/iphonesimulator/x86_64 cargo build --release --lib --target x86_64-apple-ios
	@$(RM) -f libs/libfishsense-ios.a
	@$(RM) -f libs/libfishsense-ios-sim.a
	@cp target/aarch64-apple-ios/release/libfishsense.a libs/libfishsense-ios.a
	@lipo -create -output libs/libfishsense-ios-sim.a \
             target/aarch64-apple-ios-sim/release/libfishsense.a \
             target/x86_64-apple-ios/release/libfishsense.a

toolchain:
	@cargo install cbindgen
	@rustup component add rust-src --toolchain nightly-$(nightly_version)-$(arch)-apple-darwin
	@brew install llvm cmake opencv

onnxruntime_macos: onnxruntime_simulator

onnxruntime_ios: onnxruntime_simulator $(onnxruntime_location)/iphoneos/arm64/Release/Release-iphoneos/libonnxruntime.dylib

onnxruntime_simulator: $(onnxruntime_location)/iphonesimulator/arm64/Release/Release-iphonesimulator/libonnxruntime.dylib $(onnxruntime_location)/iphonesimulator/x86_64/Release/Release-iphonesimulator/libonnxruntime.dylib

$(onnxruntime_location)/iphoneos/arm64/Release/Release-iphoneos/libonnxruntime.dylib:
	@mkdir -p $(onnxruntime_location)/iphoneos/arm64
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

$(onnxruntime_location)/iphonesimulator/arm64/Release/Release-iphonesimulator/libonnxruntime.dylib:
	@mkdir -p $(onnxruntime_location)/iphonesimulator/arm64
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

$(onnxruntime_location)/iphonesimulator/x86_64/Release/Release-iphonesimulator/libonnxruntime.dylib:
	@mkdir -p $(onnxruntime_location)/iphonesimulator/x86_64
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

opencv: $(opencv_location)/opencv2.xcframework/Info.plist

$(opencv_location)/opencv2.xcframework/Info.plist:
	@mkdir -p $(opencv_location)
	@python3 ./third_party/opencv/platforms/apple/build_xcframework.py \
		--out $(opencv_location) \
		--iphoneos_deployment_target 14.0 \
		--iphoneos_archs arm64 \
		--iphonesimulator_archs arm64,x86_64 \
		--build_only_specified_archs True \
		--dynamic \
		--without objc

clean-all: clean clean-lib

clean: toolchain
	@cargo clean
	@$(RM) -rf ./target
	@$(RM) -rf ./libs
	@$(RM) -f ./include/fishsense.h
	@$(RM) -rf ../Swift/Frameworks/FishSenseRS.xcframework
	@$(RM) -rf ../Swift/Frameworks/opencv2.xcframework

clean-lib:
	@$(RM) -rf ./third_party/lib
	

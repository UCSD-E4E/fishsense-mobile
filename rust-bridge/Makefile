nightly_version = 2025-05-14
arch = `./get_arch`
onnxruntime_framework_location = ./third_party/lib/onnxruntime
onnxruntime_build_location = ./third_party/onnxruntime/build/apple_framework/intermediates
opencv_location = ./third_party/lib/opencv
opencv_realpath = `realpath $(opencv_location)`
frameworks_out = ../Swift/Frameworks/

export OPENCV_LINK_LIBS = "opencv2.framework"

all: framework

framework: header ios opencv onnxruntime
	@$(RM) -rf $(frameworks_out)/FishSenseRS.xcframework
	@xcodebuild -create-xcframework \
		-library libs/libfishsense-ios-sim.a \
		-headers ./include/ \
		-library libs/libfishsense-ios.a \
		-headers ./include/ \
		-output $(frameworks_out)/FishSenseRS.xcframework
	@$(RM) -rf $(frameworks_out)/opencv2.xcframework
	@cp -r $(opencv_location)/opencv2.xcframework $(frameworks_out)/
	@cp -r $(onnxruntime_framework_location)/onnxruntime-c/onnxruntime.xcframework $(frameworks_out)/

header: toolchain
	@cbindgen --lang c --output include/fishsense.h

ios: toolchain onnxruntime opencv
	@mkdir -p ./libs
	@OPENCV_LINK_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64 OPENCV_INCLUDE_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64 ORT_LIB_LOCATION=$(onnxruntime_build_location)/iphoneos_arm64 cargo build --release --lib --target aarch64-apple-ios
	@OPENCV_LINK_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator OPENCV_INCLUDE_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator ORT_LIB_LOCATION=$(onnxruntime_build_location)/iphonesimulator_arm64 cargo build --release --lib --target aarch64-apple-ios-sim
	@OPENCV_LINK_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator OPENCV_INCLUDE_PATHS=$(opencv_realpath)/opencv2.xcframework/ios-arm64_x86_64-simulator ORT_LIB_LOCATION=$(onnxruntime_build_location)/iphonesimulator_x86_64 cargo build --release --lib --target x86_64-apple-ios
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

onnxruntime: ./third_party/lib/onnxruntime/onnxruntime-c/onnxruntime.xcframework/Info.plist

$(onnxruntime_framework_location)/onnxruntime-c/onnxruntime.xcframework/Info.plist:
	@mkdir -p $(onnxruntime_framework_location)
	@CMAKE_POLICY_VERSION_MINIMUM=3.5 python3 ./third_party/onnxruntime/tools/ci_build/github/apple/build_and_assemble_apple_pods.py \
		--staging-dir $(onnxruntime_framework_location) \
		--build-settings-file ./third_party/onnx_ios_build_settings.json

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
	@cp ./third_party/ocl.hpp ./third_party/lib/opencv/opencv2.xcframework/ios-arm64/opencv2.framework/Headers/core
	@cp ./third_party/ocl.hpp ./third_party/lib/opencv/opencv2.xcframework/ios-arm64_x86_64-simulator/opencv2.framework/Headers/core

clean-all: clean clean-lib

clean: toolchain
	@cargo clean
	@$(RM) -rf ./target
	@$(RM) -rf ./libs
	@$(RM) -f ./include/fishsense.h
	@$(RM) -rf $(frameworks_out)/FishSenseRS.xcframework
	@$(RM) -rf $(frameworks_out)/opencv2.xcframework

clean-lib:
	@$(RM) -rf ./third_party/lib
	@$(RM) -rf ./third_party/onnxruntime/build
	

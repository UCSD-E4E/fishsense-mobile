onnxruntime_build_location = `realpath ./libs/onnxruntime-build/build/apple_framework/intermediates`
onnxruntime_framework_location = `realpath ./libs/onnxruntime.xcframework`
opencv_location = `realpath ./libs/opencv2.xcframework`
frameworks_out = ../ios/Frameworks/

# export OPENCV_LINK_LIBS = "opencv2.framework"

all: framework

framework: header ios ios-dependencies
	@$(RM) -rf $(frameworks_out)/FishSenseRS.xcframework
	@xcodebuild -create-xcframework \
		-library libs/libfishsense-ios-sim.a \
		-headers ./include/ \
		-library libs/libfishsense-ios.a \
		-headers ./include/ \
		-output $(frameworks_out)/FishSenseRS.xcframework
	@$(RM) -rf $(frameworks_out)/opencv2.xcframework
	@cp -r $(opencv_location) $(frameworks_out)/
	@cp -r $(onnxruntime_framework_location) $(frameworks_out)/

header: toolchain
	@cbindgen --lang c --output include/fishsense.h

ios: ios-dependencies
	@OPENCV_LINK_PATHS=$(opencv_location)/ios-arm64 OPENCV_INCLUDE_PATHS=$(opencv_location)/ios-arm64 ORT_LIB_LOCATION=$(onnxruntime_build_location)/iphoneos_arm64 cargo build --release --lib --target aarch64-apple-ios
	@OPENCV_LINK_PATHS=$(opencv_location)/ios-arm64_x86_64-simulator OPENCV_INCLUDE_PATHS=$(opencv_location)/ios-arm64_x86_64-simulator ORT_LIB_LOCATION=$(onnxruntime_framework_location)/iphonesimulator_arm64 cargo build --release --lib --target aarch64-apple-ios-sim
	@OPENCV_LINK_PATHS=$(opencv_location)/ios-arm64_x86_64-simulator OPENCV_INCLUDE_PATHS=$(opencv_location)/ios-arm64_x86_64-simulator ORT_LIB_LOCATION=$(onnxruntime_framework_location)/iphonesimulator_x86_64 cargo build --release --lib --target x86_64-apple-ios
	@$(RM) -f libs/libfishsense-ios.a
	@$(RM) -f libs/libfishsense-ios-sim.a
	@cp target/aarch64-apple-ios/release/libfishsense_bridge.a libs/libfishsense-ios.a
	@lipo -create -output libs/libfishsense-ios-sim.a \
             target/aarch64-apple-ios-sim/release/libfishsense_bridge.a \
             target/x86_64-apple-ios/release/libfishsense_bridge.a

ios-dependencies:
	uv run python ./build.py

toolchain:
	@cargo install cbindgen
# 	@brew install llvm cmake opencv

clean-all: clean clean-lib

clean: toolchain
	@cargo clean
	@$(RM) -rf ./target
	@$(RM) -rf ./libs
	@$(RM) -rf ./.venv
	@$(RM) -f ./include/fishsense.h
	@$(RM) -rf $(frameworks_out)/FishSenseRS.xcframework
	@$(RM) -rf $(frameworks_out)/opencv2.xcframework
	@$(RM) -rf $(frameworks_out)/onnxruntime.xcframework

clean-lib:
	@$(RM) -rf ./third_party/lib
	@$(RM) -rf ./third_party/onnxruntime/build
	

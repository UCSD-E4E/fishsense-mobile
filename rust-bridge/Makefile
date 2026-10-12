onnxruntime_build_location = `realpath ./libs/onnxruntime-build/build/apple_framework/intermediates`
onnxruntime_framework_location = `realpath ./libs/onnxruntime.xcframework`
frameworks_out = ../ios/Frameworks/
# Use ?= so an environment-provided value (e.g. the Nix devShell pointing at a
# libclang with an absolute install name) wins; otherwise fall back to the
# Command Line Tools libclang for a plain system build.
export LIBCLANG_PATH ?= /Library/Developer/CommandLineTools/usr/lib
export DYLD_LIBRARY_PATH ?= /Library/Developer/CommandLineTools/usr/lib

all: framework

framework: header ios ios-dependencies
	@$(RM) -rf $(frameworks_out)/FishSenseRS.xcframework
	@xcodebuild -create-xcframework \
		-library libs/libfishsense-ios-sim.a \
		-headers ./include/ \
		-library libs/libfishsense-ios.a \
		-headers ./include/ \
		-output $(frameworks_out)/FishSenseRS.xcframework
	@cp -r $(onnxruntime_framework_location) $(frameworks_out)/

header: toolchain
	@cbindgen --lang c --output include/fishsense.h

ort_x86_64_lib = libs/ort-x86_64-ios
ort_x86_64_static = $(onnxruntime_build_location)/iphonesimulator_x86_64/Release/Release-iphonesimulator/static_framework/onnxruntime.framework/onnxruntime

ios: ios-dependencies
	@mkdir -p $(ort_x86_64_lib)
	@ln -sf $(ort_x86_64_static) $(ort_x86_64_lib)/libonnxruntime.a
	@ORT_IOS_XCFWK_LOCATION=$(onnxruntime_framework_location) cargo build --release --lib --target aarch64-apple-ios
	@ORT_IOS_XCFWK_LOCATION=$(onnxruntime_framework_location) cargo build --release --lib --target aarch64-apple-ios-sim
	@ORT_IOS_XCFWK_LOCATION=$(onnxruntime_framework_location) ORT_LIB_LOCATION=$$(pwd)/$(ort_x86_64_lib) cargo build --release --lib --target x86_64-apple-ios
	@$(RM) -f libs/libfishsense-ios.a
	@$(RM) -f libs/libfishsense-ios-sim.a
	@cp target/aarch64-apple-ios/release/libfishsense_bridge.a libs/libfishsense-ios.a
	@lipo -create -output libs/libfishsense-ios-sim.a \
             target/aarch64-apple-ios-sim/release/libfishsense_bridge.a \
             target/x86_64-apple-ios/release/libfishsense_bridge.a

ios-dependencies:
	uv run python ./build.py

toolchain:
	@command -v cbindgen >/dev/null 2>&1 || cargo install cbindgen
# 	@brew install llvm cmake

clean-all: clean clean-lib

clean: toolchain
	@cargo clean
	@$(RM) -rf ./target
	@$(RM) -rf ./libs
	@$(RM) -rf ./.venv
	@$(RM) -f ./include/fishsense.h
	@$(RM) -rf $(frameworks_out)/FishSenseRS.xcframework
	@$(RM) -rf $(frameworks_out)/onnxruntime.xcframework

clean-lib:
	@$(RM) -rf ./third_party/lib
	@$(RM) -rf ./third_party/onnxruntime/build
	

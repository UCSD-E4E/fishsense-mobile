.PHONY: all ios rust flutter-deps clean test lint debug release

all: ios

rust:
	$(MAKE) -C rust-bridge

flutter-deps:
	flutter pub get

ios: rust flutter-deps
	flutter build ios --release --no-codesign

release: rust flutter-deps
	flutter build ios --release

debug: rust flutter-deps
	flutter run

test: flutter-deps
	cd rust-bridge && cargo test
	flutter test

lint: flutter-deps
	cd rust-bridge && cargo fmt --check && cargo clippy -- -D warnings
	flutter analyze

clean:
	-flutter clean
	$(MAKE) -C rust-bridge clean-all

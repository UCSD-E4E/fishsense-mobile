# Changelog

## [1.1.0](https://github.com/UCSD-E4E/fishsense-mobile/compare/v1.0.0...v1.1.0) (2026-10-21)


### Features

* add Nix dev shell and replace OpenCV with pure-Rust image processing ([#61](https://github.com/UCSD-E4E/fishsense-mobile/issues/61)) ([c1345b5](https://github.com/UCSD-E4E/fishsense-mobile/commit/c1345b5416ac8fecf1a3cb3572ef554ad2216aa5))
* **db:** v8 capture provenance and measurement versions ([#68](https://github.com/UCSD-E4E/fishsense-mobile/issues/68)) ([13aa377](https://github.com/UCSD-E4E/fishsense-mobile/commit/13aa377012b18ac87312d94c26a5e5a1958fbb24))
* optional Authentik sign-in for sync ([#69](https://github.com/UCSD-E4E/fishsense-mobile/issues/69)) ([9627c96](https://github.com/UCSD-E4E/fishsense-mobile/commit/9627c964de3775c79d27a3c6d779e4c4e5d0ddc8))
* **sync:** sync captures to fishsense-services automatically ([#72](https://github.com/UCSD-E4E/fishsense-mobile/issues/72)) ([795fa07](https://github.com/UCSD-E4E/fishsense-mobile/commit/795fa077de44e5debb8e21e5b5517fe2f856378e))


### Bug Fixes

* **capture:** stop rejecting close-up fish; say why a fish wasn't measured ([#71](https://github.com/UCSD-E4E/fishsense-mobile/issues/71)) ([0a8c0c3](https://github.com/UCSD-E4E/fishsense-mobile/commit/0a8c0c32e6b780e7b0aaf2f2c41b9bacc55bb8e1))
* **ci:** target main with release-please ([785a04a](https://github.com/UCSD-E4E/fishsense-mobile/commit/785a04aaf5cc2a5436c5c6d4d92eaa86c5325492))
* **ci:** target main with release-please ([c8f58c0](https://github.com/UCSD-E4E/fishsense-mobile/commit/c8f58c0fdcb28d0c49c8c23a624fc84471a0cd74))
* **rust-bridge:** never abort when a log write fails ([#70](https://github.com/UCSD-E4E/fishsense-mobile/issues/70)) ([658924e](https://github.com/UCSD-E4E/fishsense-mobile/commit/658924e41d4540147aeed6ffd1853779a2805a29))

# Contributing

FishSense Mobile has users who rely on the TestFlight builds, so `main` only
moves when we cut a release. Day-to-day work lands on `develop`.

## Branches

| Branch | What it is | Deploys to |
|--------|------------|------------|
| `develop` | Default branch. Integration of finished work. | TestFlight, internal testers, on every push |
| `main` | What users run. Changes only through a release or a hotfix. | TestFlight external group(s), on each release |
| `feat/*`, `fix/*`, `chore/*`, … | Short-lived work branches off `develop`. | Nothing (CI builds and tests only) |
| `hotfix/*` | Urgent fix branched off `main`. | Ships with the next release from `main` |

## Day-to-day

1. Branch off `develop` and open a PR back into `develop`.
2. Title the PR as a [Conventional Commit](https://www.conventionalcommits.org/)
   (`feat: …`, `fix(rust-bridge): …`, `chore(deps): …`). PRs into `develop`
   are **squash-merged**, so the title becomes the commit that release-please
   reads to pick the next version and write the changelog. CI checks the title.
3. Once CI passes and the PR is approved, squash-merge it. The merge uploads a
   build to TestFlight for internal testers.

## Releasing

1. Open a PR from `develop` into `main` (e.g. `chore: promote develop to main`)
   and merge it with a **merge commit**. Don't squash it: squashing breaks the
   shared history between the branches and the next promotion will conflict.
2. release-please opens (or updates) a `chore(main): release X.Y.Z` PR that
   bumps `version:` in `pubspec.yaml` and updates `CHANGELOG.md`. Review the
   notes, then merge it.
3. That merge tags `vX.Y.Z`, publishes a GitHub Release, and uploads the build
   to the external TestFlight group(s), with the release notes as "What to Test".
4. CI opens a `chore: sync main into develop after vX.Y.Z` PR. Merge it with a
   merge commit so `develop` picks up the new version.

Version bumps follow the commits since the last release: `fix:` gives a
patch, `feat:` a minor, and `!` / `BREAKING CHANGE:` a major. Keep `!` for
changes users would notice, not internal refactors.

## Hotfixes

1. Branch `hotfix/<name>` off `main`, open a PR into `main`, and merge it.
2. Merge the release PR that release-please opens, as in a normal release.
3. Merge the sync PR so the fix reaches `develop`.

## One-time setup (maintainers)

- **`RELEASE_PLEASE_TOKEN` secret.** Create a fine-grained PAT or GitHub App
  token with Contents and Pull requests write access. Without it,
  release-please and the sync job fall back to `GITHUB_TOKEN`. PRs opened with
  that token don't trigger CI, so the required checks never report and those
  PRs need an admin bypass.
- **`TESTFLIGHT_EXTERNAL_GROUPS` variable.** A comma-separated list of the
  external TestFlight group names that receive releases.
- In App Store Connect, fill in the Beta App Review information once, so that
  external builds can be submitted for review automatically.

# Contributing

Each branch is a release ring. A version starts on `develop` and moves,
unchanged, through `staging` to `main`; only the build number changes on the
way. Apple reviews the first build of each new version (TestFlight external
testing and the App Store both), so we change the version only when we start
work toward the next App Store release.

## Branches

| Branch | Ring | Deploys to |
|--------|------|------------|
| `develop` | Default branch. What we test ourselves. | TestFlight, internal testers, on every push |
| `staging` | Beta. What collaborators test. | TestFlight external group(s), on every push |
| `main` | What App Store users run. | App Store: uploaded and submitted for review, on every push |
| `feat/*`, `fix/*`, `chore/*`, … | Short-lived work branches off `develop`. | Nothing (CI builds and tests only) |
| `hotfix/*` | Fix for `staging` when `develop` has moved on to the next version. | Nothing until merged into `staging` |

## Day-to-day

1. Branch off `develop` and open a PR back into `develop`.
2. Title the PR as a [Conventional Commit](https://www.conventionalcommits.org/)
   (`feat: …`, `fix(rust-bridge): …`, `chore(deps): …`). PRs into `develop`
   are **squash-merged**, so the title becomes the commit that release-please
   reads to pick the next version and write the changelog. CI checks the title.
3. Once CI passes and the PR is approved, squash-merge it. The merge uploads a
   build to TestFlight for internal testers.

## Promoting

- **To beta testers:** open a PR from `develop` into `staging` (e.g.
  `chore: promote develop to staging`) and merge it with a **merge commit**.
  Each push to `staging` uploads to the external TestFlight group(s). The first
  build of a version waits for Beta App Review (usually under a day); later
  builds of the same version usually don't.
- **To the App Store:** open a PR from `staging` into `main` and merge it with
  a merge commit. CI uploads the build and submits it for App Store review.
  Release it from App Store Connect once it's approved.

Don't squash promotions: squashing breaks the shared history between the
branches and the next promotion will conflict.

## Starting the next version

release-please keeps a `chore(develop): release X.Y.Z` PR open on `develop`,
updated on every push. Merging it bumps `version:` in `pubspec.yaml`, writes
`CHANGELOG.md`, tags `vX.Y.Z`, and publishes a GitHub Release whose notes
become the TestFlight "What to Test" and App Store "What's New" text.

Merge it right after promoting the current version to `main`. Once Apple
approves a version, App Store Connect refuses new builds with that version, so
`develop` has to be on the next one by then.

The bump follows the commits since the last version: `fix:` gives a patch,
`feat:` a minor, and `!` / `BREAKING CHANGE:` a major. Keep `!` for changes
users would notice, not internal refactors.

## Hotfixes

While `develop` is still on the version in `staging`, fix it on `develop` and
promote as usual. Once `develop` has moved on:

1. Branch `hotfix/<name>` off `staging`, open a PR into `staging`, and merge it.
2. Promote `staging` to `main` if the fix is for App Store users.
3. Cherry-pick the fix into a PR against `develop`.

## One-time setup (maintainers)

- **`RELEASE_PLEASE_TOKEN` secret.** Create a fine-grained PAT or GitHub App
  token with Contents and Pull requests write access. Without it,
  release-please and the sync job fall back to `GITHUB_TOKEN`. PRs opened with
  that token don't trigger CI, so the required checks never report and those
  PRs need an admin bypass.
- **`TESTFLIGHT_EXTERNAL_GROUPS` variable.** A comma-separated list of the
  external TestFlight group names that receive `staging` builds.
- In App Store Connect, fill in the Beta App Review information once, so that
  external builds can be submitted for review automatically.
- Keep the App Store listing (description, screenshots, App Review
  information, privacy answers) complete in App Store Connect. CI uploads only
  the build and its release notes, and submission fails if the listing is
  incomplete.

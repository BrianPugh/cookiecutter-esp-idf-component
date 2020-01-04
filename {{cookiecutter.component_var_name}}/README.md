
# {{cookiecutter.component_name}}

# Features

# Usage

To add the latest release of this repo to your ESP-IDF project, run the following
commands in your project's root directory.

```
cd components
git submodule add {{cookiecutter.git_repo}}
```

This will checkout the latest, bleeding-edge `master`. To use the last official
release, then run:

```
cd {{cookiecutter.component_var_name}}
git checkout v0.0.0
```

# Unit Testing
This repo contains a built-in unit tester. To flash the unit-test app, run

```
make tests
```

# Contributing

## Increasing version number

The following must be done with no unstaged files to commit.

To increase the version for a backwards incompatible release, run:

```
bump2version major
```

To increase the version for a feature release, run:

```
bump2version minor
```

To increase the version for a bug-fix release, run:

```
bump2version patch
```

These commands will increase the version number in all the appropriate locations,
create a commit, and tag the commit with the new version number. Finally,
push this new commit and tag to the remote repo:

```
git push && git push --tags
```

# Contributors

* {{cookiecutter.full_name}}


# Usage

First, make sure the python dependencies are installed:

```
pip3 install -r requirements.txt
```

Next, we will use `cookiecutter` and Jolt's cookiecutter app template to 
generate a jolt application project.

```
cookiecutter -c v0.1.1 git@github.com:BrianPugh/cookiecutter-esp-idf-component.git
```

Follow the onscreen prompts; pressing "enter" will use the default value.
The prompts are described in more detail below:

1. `full_name` - Your full name (for documentation).
2. `component_name` - Name of the component.
3. `component_var_name` - Name of app-related variables in code.

# Features

This cookiecutter performs the following actions or sets up to allow you to perform
the following actions:

## License

The MIT license will automatically be added to your repo. You may manually change
this.

## Git

Git will be initialized and all the files will be commited indicating 
the verseion of this cookiecutter template you used.

Build artifacts will already be in the `.gitignore`

## Unit Testing Build system

The Makefile will already be populated so that you can immediately build your
component with a unit-tester app. See the component's README for more information.

## Versioning

Use `bump2version` to manage your app's version. `bump2version` is a maintained
fork of `bumpversion`.

```
pip3 install bump2version
```

This template already has a `.bumpversion.cfg` populated for you. In your project's
clean (no unstaged changes) root directory, the following commands will increase
the version number and commit the version change:

```
bump2version major  # For backwards incompatible changes.
bump2version minor  # For backwards compatible feature updates
bump2version patch  # For bug fixes
```

I recommend adding the alias to your `~/.bashrc`

```
alias bumpversion="bump2version"
```

Component versioning information will be available in your component's header 
file as:

```
{{cookiecutter.component_var_name | upper}}_VERSION_MAJOR
{{cookiecutter.component_var_name | upper}}_VERSION_MINOR
{{cookiecutter.component_var_name | upper}}_VERSION_PATCH
```

For example,

```
MY_COMPONENT_VERSION_MAJOR
MY_COMPONENT_VERSION_MINOR
MY_COMPONENT_VERSION_PATCH
```

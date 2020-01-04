#!/bin/bash -e

git init
git add .
git commit -a -m "Initial Cookiecutter Commit from github.com:BrianPugh/cookiecutter-esp-idf-component.git ( 0.1.1 )."
git remote add origin {{cookiecutter.git_repo}}

SHELL := /bin/bash

test:
	# Tests if it builds
	rm -rf my_component/
	cookiecutter --no-input --overwrite-if-exists .
	cd my_component; \
			make defconfig; \
			make tests -j15

install:
	pip3 install -r requirements.txt

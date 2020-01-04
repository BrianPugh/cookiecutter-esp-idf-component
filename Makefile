SHELL := /bin/bash

ESP_SERIAL_PORT ?= /dev/ttyS5

test:
	# Tests if it builds
	rm -rf my_component/
	cookiecutter --no-input --overwrite-if-exists .
	cd my_component; \
		    touch sdkconfig.defaults
		    echo "CONFIG_ESPTOOLPY_PORT=\"$(ESP_SERIAL_PORT)\"" >> sdkconfig.defaults; \
			make defconfig; \
			make tests -j15

install:
	pip3 install -r requirements.txt

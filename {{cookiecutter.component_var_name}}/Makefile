PROJECT_NAME := {{cookiecutter.component_var_name}}_unit_tester

EXTRA_COMPONENT_DIRS := \
	$(abspath .) \
	$(abspath unit_tester) \
	$(IDF_PATH)/tools/unit-test-app/components/

CFLAGS += \
		-Werror

include $(IDF_PATH)/make/project.mk

.PHONY: tests lint

tests:
	$(MAKE) \
		TEST_COMPONENTS='src' \
		flash monitor;

lint:
	find src/ include/ \
		\( \
			-iname '*.h' \
			-o -iname '*.c' \
			-o -iname '*.cpp' \
			-o -iname '*.hpp' \
		\) \
		| xargs clang-format -style=file -i -fallback-style=google



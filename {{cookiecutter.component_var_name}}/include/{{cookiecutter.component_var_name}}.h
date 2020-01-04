#ifndef {{cookiecutter.component_var_name | upper}}_H__
#define {{cookiecutter.component_var_name | upper}}_H__

#include <stdint.h>
#include <stddef.h>
#include <stdarg.h>
#include "sdkconfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/* These version numbers are handled automatically via bump2version */
static uint8_t {{cookiecutter.component_var_name | upper}}_VERSION_MAJOR = 0;
static uint8_t {{cookiecutter.component_var_name | upper}}_VERSION_MINOR = 0;
static uint8_t {{cookiecutter.component_var_name | upper}}_VERSION_PATCH = 0;

/* Declare functions here */

#ifdef __cplusplus
} // extern "C"
#endif

#endif  // Guard

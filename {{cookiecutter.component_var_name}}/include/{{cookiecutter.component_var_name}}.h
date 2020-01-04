#ifndef {{cookiecutter.component_var_name | upper}}_H__
#define {{cookiecutter.component_var_name | upper}}_H__

#include "sdkconfig.h"
#include "stdarg.h"
#include "stddef.h"
#include "stdint.h"

#ifdef __cplusplus
extern "C" {
#endif

/* These version numbers are handled automatically via bump2version */
static uint8_t {{cookiecutter.component_var_name | upper}}_VERSION_MAJOR = 0;
static uint8_t {{cookiecutter.component_var_name | upper}}_VERSION_MINOR = 0;
static uint8_t {{cookiecutter.component_var_name | upper}}_VERSION_PATCH = 0;

/* Declare functions here */

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // Guard

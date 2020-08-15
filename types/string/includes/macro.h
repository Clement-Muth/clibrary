/*
** EPITECH PROJECT, 2020
** clibrary
** File description:
** macro
*/

#ifndef STRING_MACRO_H_
#define STRING_MACRO_H_

#include <stdarg.h>
#include "utils_function.h"
#include "../../../assert/includes/constant.h"

#ifdef GET
    #undef GET
    #define GET(body, ...) ({                                               \
        char*(*action)(int n_arg, ...) =                                    \
            _LAMBDA(char*, (int n_arg __attribute__((unused)), ...)body);   \
        action(_N__ARG(##__VA_ARGS__), ##__VA_ARGS__);                      \
    })
#endif // GET

/**
 * Returns a string object. 
 * This function is not a possible cancellation point and therefore if an error 
 * occured, a warning will be thrown.
 * @param value The value of new string object.
 */
#define new_string(value)                                               \
    new_string((assert_info_t){.file = __FILE__, .function = __func__,  \
                               .line = __LINE__, .time = __TIME__}, value)

static inline string_t (new_string)(assert_info_t info, const char *value)
{
    if (value == NULL) {
        my_assert_warn_dev(value != NULL, info.line,
        DESC_WARN_NEW_STRING_UNDEFINED, ERR_TYPE, info.line, info.function,
        info.file, FAIL_FUNC_EXEC, info.time);
        return (this_constructor(UNDEFINED));
    }
    return (this_constructor(value));
}

#endif /* !STRING_MACRO_H_ */
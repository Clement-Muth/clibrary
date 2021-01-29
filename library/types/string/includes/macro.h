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
#include "../../../assert/includes/index.h"
#include "../../../includes/constant.h"

#ifdef GET
    #undef GET
    #define GET(body, ...) ({                                               \
        char*(*action)(int n_arg, ...) =                                    \
            _LAMBDA(char*, (int n_arg __attribute__((unused)), ...)body)    \
        action(_N__ARG(##__VA_ARGS__), ##__VA_ARGS__)                       \
    })
#endif // GET

#endif /* !STRING_MACRO_H_ */
/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** assert_warn
*/

#include "includes/index.h"
#include "includes/constant.h"
#include "../utils/includes/index.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#ifdef YELLOW
    #undef YELLOW
    #define YELLOW "\033[1;93m"
#endif /* YELLOW */

static char *error_underline(int length)
{
    char *underline = malloc(length + 1);

    for (int i = 0; length != i - 1; i++)
        underline[i] = '~';
    underline[length - 1] = '\0';
    return (underline);
}

int (my_assert_warn_fail_dev)(const char *assertion, global_info infos,
                              int n_arg, ...)
{
    va_list err_l;

    va_start(err_l, n_arg);
    #ifdef DEBUG
        printf("[%sWARNING%s] %s%s%s x %s\n\
        \r%s%s%s:%s%s%s:%s%d%s - %swarning%s %s%s%s %s\n\n\
        \r%s%d%s\t%s\n\
        \r%s  %s\t%s^%s%s\n", YELLOW, RES, GREY, (8 == n_arg) ?
        va_arg(err_l, char *) : infos.time, RES, va_arg(err_l, char *), CYAN,
        realpath((8 == n_arg) ? va_arg(err_l, char *) : infos.file, NULL),
        RES, CYAN, (8 == n_arg) ? va_arg(err_l, char *) : infos.func, RES,
        YELLOW, (8 == n_arg) ? va_arg(err_l, int) : infos.line, RES, YELLOW,
        RES, GREY, va_arg(err_l, char *), RES, va_arg(err_l, char *), GREY_WHITE
        , (8 == n_arg) ? va_arg(err_l, int) : infos.line, RES, assertion,
        GREY_WHITE, RES, YELLOW, error_underline(my_strlen(assertion)), RES);
    #endif
    return (-1);
}
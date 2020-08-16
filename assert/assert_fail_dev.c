/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** assert_fail
*/

#include "includes/index.h"
#include "includes/constant.h"
#include "../utils/includes/index.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

static char *error_underline(int length)
{
    char *underline = malloc(length + 1);

    for (int i = 0; length != i - 1; i++)
        underline[i] = '~';
    underline[length - 1] = '\0';
    return (underline);
}

int (my_assert_fail_dev)(__attribute__((unused)) const char *assertion,
                        global_info infos, ...)
{
    va_list internal_info_errors;

    va_start(internal_info_errors, infos);
    #ifdef DEBUG
        printf("[%sERROR%s] %s%s%s x %s\n\
        \r%s%s%s:%s%s%s:%s%d%s - %serror%s %s%s%s %s\n\n\
        \r%s%d%s\t%s\n\
        \r%s  %s\t%s^%s%s\n", RED, RES, GREY, infos.time,
        RES, va_arg(internal_info_errors, char *), CYAN,
        realpath(infos.file, NULL), RES, CYAN, infos.func, RES, YELLOW,
        infos.line, RES, RED, RES, GREY, va_arg(internal_info_errors, char *),
        RES, va_arg(internal_info_errors, char *), GREY_WHITE, infos.line, RES,
        assertion, GREY_WHITE, RES, RED, error_underline(my_strlen(assertion)),
        RES);
    #else
        write(2, "An error occured. Aborted.", 27);
    #endif
    return (-1);
}
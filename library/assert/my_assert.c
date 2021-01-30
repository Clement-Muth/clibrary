/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** assert_fail
*/

#include <stdlib.h>
#include <stdio.h>
#include "../includes/index.h"
#include "../print/includes/index.h"
#include "../utils/includes/index.h"
#include "index.h"

static char *error_underline(int length)
{
    char *underline = malloc(length + 1);

    for (int i = 0; length != i - 1; i++)
        underline[i] = '~';
    underline[length - 1] = '\0';
    return (underline);
}

int (my_assert)(char const *assertion,
    global_info_t infos, assert_info_t assert_data, jmp_buf ex_buf)
{
    #ifdef DEBUG
        printf("[%sERROR%s] %s%s%s x %s\n\
        \r%s%s%s:%s%s%s:%s%d%s - %serror%s %s%s%s %s\n\n\
        \r%s%d%s\t%s\n\
        \r%s  %s\t%s^%s%s\n", RED, RES, GREY, infos.time, RES, assert_data.desc,
        CYAN, realpath(infos.file, NULL), RES, CYAN, infos.func, RES, YELLOW,
        infos.line, RES, RED, RES, GREY, assert_data.type, RES, assert_data.nbr,
        GREY_WHITE, infos.line, RES, assertion, GREY_WHITE, RES, RED,
        error_underline(my_strlen(assertion)), RES);
        printf("exit(84)\n");
        exit(84);
    #else
        my_putstr("An error occured. Aborted.", 2);
    #endif
    THROW(1);
    return (84);
}
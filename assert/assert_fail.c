/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** assert_fail
*/

/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** assert_fail
*/

#include "includes/index.h"
#include <stdio.h>
#include <stdlib.h>

int my_assert_fail(__attribute__((unused)) const char *assertion,
                        const char *file, const int line, const char *func)
{
    #ifdef DEBUG
        printf("%s: %s:%d: %s '%s' failed\n", file, func, line,
            "Assertion", assertion);
    #else
        console_t console = init_console();
        console.error("An error occured - Please try again\n");
    #endif
    return (-1);
}
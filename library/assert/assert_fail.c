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
#include "includes/constant.h"
#include <stdio.h>

int my_assert_fail(const char *assertion,
                        const char *file, const int line, const char *func)
{
    #ifdef DEBUG
        printf("%s: %s:%d: %s '%s' failed\n", file, func, line,
            "Assertion", assertion);
    #else
        write(2, "An error occured - Please try again\n", 37);
    #endif
    return (-1);
}
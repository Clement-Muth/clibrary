/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** assert_fail
*/

#include "includes/index.h"

bool my_assert_fail(__attribute__((unused)) const char *assertion,
__attribute__((unused)) const char *file, __attribute__((unused)) unsigned line
, __attribute__((unused)) const char *function)
{
    print_t print = init_print();

    #ifdef DEBUG
        printf("%s: %s:%d: %s '%s' failed\n", file, function, line,
            "Assertion", assertion);
        exit(84);
    #else
        print.error("An error occured - Please try again\n");
        return (false);
    #endif
}
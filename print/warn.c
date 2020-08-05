/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** Outputs a warning message.
*/

#include "includes/index.h"

ssize_t warn(const char *warning)
{
    print_color("warning ", "\033[1;33m", STAND_OUTPUT);
    for (int i = 0; warning[i]; i++)
        print(warning[i], STAND_OUTPUT);
    return my_strlen(warning);
}
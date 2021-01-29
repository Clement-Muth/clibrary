/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** Outputs an error message.
*/

#include "includes/index.h"
#include "../includes/constant.h"
#include "../utils/includes/index.h"
#include <stdlib.h>

void error(const char *error)
{
    my_putchar('[', 2);
    print_color("ERROR ", "\033[1;31m", ERR_OUTPUT);
    my_putchar(']', 2);
    for (int i = 0; error[i]; i++)
        my_putchar(error[i], ERR_OUTPUT);
}
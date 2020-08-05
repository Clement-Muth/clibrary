/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** Outputs an error message.
*/

#include "includes/index.h"

ssize_t error(const char *error)
{
    print_color("error ", "\033[1;31m", ERR_OUTPUT);
    for (int i = 0; error[i]; i++)
        print(error[i], ERR_OUTPUT);
    return my_strlen(error);
}
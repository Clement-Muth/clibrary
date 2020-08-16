/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** write string in 1 output
*/

#include "includes/index.h"
#include "../utils/includes/index.h"
#include "../includes/constant.h"
#include <stdlib.h>

ssize_t logger(const char *message)
{
    for (int i = 0; message[i]; i++)
        print(message[i], STAND_OUTPUT);
    print('\n', 1);
    return (my_strlen(message));
}
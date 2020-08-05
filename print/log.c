/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** write string in 1 output
*/

#include "includes/index.h"

ssize_t logger(const char *message)
{
    for (int i = 0; message[i]; i++)
        print(message[i], STAND_OUTPUT);
    return (my_strlen(message));
}
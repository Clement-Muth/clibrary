/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** print
*/

#include "includes/index.h"

void print(char character, int fd)
{
    write(fd, &character, 1);
}
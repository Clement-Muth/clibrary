/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** print
*/

#include "includes/index.h"

ssize_t print(char character, int fd)
{
    return write(fd, &character, 1);
}
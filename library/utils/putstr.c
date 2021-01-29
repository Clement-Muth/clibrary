/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** print
*/

#include <unistd.h>
#include "./includes/index.h"

void my_putstr(char *string, int fd)
{
    for(int i = 0; string[i]; i++)
        my_putchar(string[i], fd);
}
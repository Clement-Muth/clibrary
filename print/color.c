/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** print string in color
*/

#include "includes/index.h"
#include "../utils/includes/index.h"
#include <stdlib.h>
#include <unistd.h>

ssize_t print_color(const char *string, const char *hex_color, int fd)
{
    char reset_color[] = "\033[0m";

    write(fd, hex_color, my_strlen(hex_color));
    for (int i = 0; string[i]; i++)
        write(fd, &string[i], 1);
    write(fd, reset_color, my_strlen(reset_color));
    return (my_strlen(string));
}
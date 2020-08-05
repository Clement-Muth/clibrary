/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** strlen
*/
 
#include "includes/index.h"
#include <stdlib.h>
#include <stdbool.h>

size_t my_strlen(const char *string)
{
    char error[] = "strlen.c: string can't be undefined\n";
    int i = 0;

    if (!string) {
        write(ERR_OUTPUT, error, my_strlen(error));
        return (false);
    }
    for (i = 0; string[i]; i++);
    return (i);
}
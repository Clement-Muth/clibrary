/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** revstr
*/

#include "includes/index.h"
#include <stdlib.h>

int my_revstr(char *string)
{
    int len = my_strlen(string);
    int mid = len / 2;
    char tmp;

    if (string == NULL)
        return (84);
    for (int i = 0; i < mid; ++i) {
        tmp = string[i];
        string[i] = string[--len];
        string[len] = tmp;
    }
    return (0);
}
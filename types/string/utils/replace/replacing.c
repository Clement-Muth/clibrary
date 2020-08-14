/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** replacing
*/

#include "../../includes/index.h"

char *replacing(string *string, char **copy, const char *replace_value)
{
    return (string->value = my_strcat(copy[0],
        my_strcat((char *)replace_value, copy[2])));
}
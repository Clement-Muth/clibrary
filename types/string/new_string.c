/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** init_string
*/

#include "includes/index.h"
#include <stdio.h>
#include <stdlib.h>

string new_string(const char *value)
{
    string string;

    string.concat = concat;
    string.index_of = index_of;
    string.last_index_of = last_index_of;
    string.match = match;
    string.replace = replace;
    string.substr = substr;
    string.length = my_strlen(value);
    string.value = my_strdup((char *)value);
    string.type = "string";

    string.self = &string;
    string.self->value = string.value;
    string.self->type = string.type;
    return (string);
}
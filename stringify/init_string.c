/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** init_string
*/

#include "../includes/index.h"

string init_string(const char *value)
{
    string string;

    my_assert(value);
    string.concat = concat;
    string.index_of = index_of;
    string.last_index_of = last_index_of;
    string.match = match;
    string.replace = replace;
    string.slice = slice;
    string.substr = substr;
    string.length = my_strlen(value);
    string.value = (char *)value;
    return (string);
}
/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** match
*/

#include "includes/index.h"

bool match(const string string, const char *regex)
{
    return (!my_strcmp(string.value, regex)) ? true : false;
}
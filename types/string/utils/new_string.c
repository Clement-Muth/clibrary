/*
** EPITECH PROJECT, 2020
** clibrary
** File description:
** new_string
*/

#include "../includes/index.h"

string_t this_constructor(const char *value)
{
    string_t this;

    this.concat = concat;
    this.index_of = index_of;
    this.last_index_of = last_index_of;
    this.match = match;
    this.replace = replace;
    this.substr = substr;
    this.length = my_strlen(value);
    this.value = my_strdup((char *)value);
    this.type = "string";
    return (this);
}
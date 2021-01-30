/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** find
*/

#include "includes/index.h"

int find_c(const string_t *this, char *str, size_t pos)
{
    char *tmp;

    if (this->length <= pos)
        return (-1);
    tmp = my_strstr(&this->str[pos], str);
    return (tmp) ? (tmp - this->str) : (-1);
}

int find(const string_t *this, const string_t *str, size_t pos)
{
    return this->find_c(this, str->str, pos);
}
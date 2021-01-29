/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** replacing
*/

#include "../../includes/index.h"
#include "../../../../utils/includes/index.h"

char *replacing(string_t *this, char **copy, const char *replace_value)
{
    return (this->value = my_strcat(copy[0],
        my_strcat((char *)replace_value, copy[2])));
}
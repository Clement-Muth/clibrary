/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** get_type
*/

#include "includes/index.h"
#include "../includes/index.h"
#include "../types/array/string/includes/structs.h"
#include "../types/number/includes/structs.h"
#include "../types/string/includes/structs.h"

int get_type(const void *var)
{
    return (!((string_t *)var)->type && !((number_t *)var)->type)
        ? 84
        : my_strcmp(((string_t *)var)->type, "string") == 0
        ? STRING
        : my_strcmp(((number_t *)var)->type, "number") == 0
        ? NUMBER
        : my_strcmp(((array_s *)var)->type, "array_s") == 0
        ? ARRAY_STRING
        : ARRAY_NUMBER;
}
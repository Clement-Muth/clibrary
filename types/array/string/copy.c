/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** copy
*/

#include "includes/index.h"

char **copy(const array_s *array)
{
    char **new_array = malloc(sizeof(char *) * (array->length + 1));

    array->foreach(E(el, array, i, {
        new_array[i] = my_strdup(el.value);
    }));
    new_array[array->length] = NULL;
    return (new_array);
}
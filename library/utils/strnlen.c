/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** strnlen
*/

#include "includes/index.h"

size_t my_strnlen(char const *restrict string, size_t maxlength)
{
    size_t i;

    for (i = 0; i < maxlength; ++i)
        if (!string[i]) break;
    return (i);
}
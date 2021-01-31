/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** strncpy
*/

#include "includes/index.h"

char *my_strncpy(char *s1, char const *restrict s2, register size_t n)
{
    register size_t size = my_strnlen(s2, n);

    if (size != n)
    my_memset(s1 + size, '\0', n - size);
    return my_memcpy(s1, s2, size);
}
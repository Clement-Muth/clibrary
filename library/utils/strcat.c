/*
** EPITECH PROJECT, 2020
** clibrary
** File description:
** strcat
*/

#include "includes/index.h"

char *my_strcat(register char *dest, register char const *restrict src)
{
    char *tmp = dest;

    while (*dest && ++dest);
    while ((*dest++ = *src++));
    return (tmp);
}
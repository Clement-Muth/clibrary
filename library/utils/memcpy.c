/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** memcpy
*/

#include <stdlib.h>

void *my_memcpy(void *dest, const void *src, int length)
{
    char *d = dest;
    const char *s = src;

    while (length--)
        *d++ = *s++;
    return dest;
}
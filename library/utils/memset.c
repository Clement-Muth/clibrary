/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** memset
*/

#include "index.h"

void *my_memset(void *dest, int val, register size_t length)
{
    unsigned char *ptr = dest;

    while (length-- > 0) *ptr++ = val;
    return (dest);
}
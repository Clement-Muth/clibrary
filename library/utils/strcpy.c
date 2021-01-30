/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** strcpy
*/

#include "includes/index.h"

char *my_strcpy(char *dest, char const *restrict src)
{
    return my_memcpy(dest, src, my_strlen(src) + 1);
}
/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** strcat
*/

#include "includes/index.h"
#include <stdlib.h>

char *my_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;
    int cont = 0;
    int h = my_strlen(dest) + my_strlen(src) + 1;
    char *result = (char*)malloc(h * sizeof(char));

    for(i = 0; i < (int)my_strlen(dest); i++)
        result[i] = dest[i];
    for(j = i; j < (int)(my_strlen(src) + my_strlen(dest)); j++)
        result[j] = src[cont++];
    result[h - 1] = '\0';
    dest = result;
    return (result);
}
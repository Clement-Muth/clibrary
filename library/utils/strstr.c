/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** strstr
*/

#include "index.h"

char *my_strstr(register char *string, char *substring)
{
    register char *a;
    register char *b = substring;

    if (*b == 0) return (string);
    for (; *string != 0; ++string) {
        if (*string != *b) continue;
        a = string;
        while (1) {
            if (*b == 0) return (string);
            if (*a++ != *b++) break;
        }
        b = substring;
    }
    return (NULL);
}
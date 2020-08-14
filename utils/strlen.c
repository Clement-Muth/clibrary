/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** strlen
*/
 
#include "includes/index.h"
#include <stdlib.h>
#include <stdbool.h>

size_t my_strlen(const char *string)
{
    int i = 0;
    const console console = init_console();

    if (!string) {
        my_assert(string == NULL);
        return (false);
    }
    for (i = 0; string[i]; i++);
    return (i);
}
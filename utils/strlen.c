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

    if (!string) {
        my_assert_dev(string != NULL, DESC_ERR_STRLEN_UNDEFINED, ERR_TYPE,
        FAIL_EXEC);
        return (false);
    }
    for (i = 0; string[i]; i++);
    return (i);
}
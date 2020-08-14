/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** strdup
*/

#include "includes/index.h"
#include <stdlib.h>

char *my_strdup(const char *string)
{
    size_t len = my_strlen(string) + 1;
    void *new = malloc(len);

    if (new == NULL) {
        my_assert_dev(new != NULL, DESC_ERR_ALLOC_FAILED, ERR_ALC84,
        FAIL_EXEC);
        return (UNDEFINED);
    }
    return ((char *)my_memcpy(new, string, len));
}
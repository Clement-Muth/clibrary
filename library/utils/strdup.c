/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** strdup
*/

#include "includes/index.h"
#include "../assert/includes/constant.h"
#include "../assert/includes/index.h"
#include "../includes/constant.h"
#include <stdlib.h>

char *my_strdup(char const *restrict string)
{
    size_t len = my_strlen(string) + 1;
    void *new = malloc(len);

    if (new == NULL) {
        my_assert(new != NULL, PROTO_DATA,
            ASSERT_INFO(DESC_ERR_ALLOC_FAILED, ERR_ALC84, FAIL_EXEC), NULL);
        return (UNDEFINED);
    }
    return ((char *)my_memcpy(new, string, len));
}
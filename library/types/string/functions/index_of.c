/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index_of
*/

#include "../includes/index.h"
#include "../../../assert/includes/index.h"
#include "../../../assert/includes/constant.h"
#include <stdio.h>

vect2i index_of(const string_t *self, const char *search_string)
{
    if (search_string == NULL) {
        printf("null\n");
        my_assert_warn_dev(!search_string, DESC_WARN_INDEX_OF_UNDEFINED,
        ERR_TYPE, FAIL_FUNC_EXEC);
        return ((vect2i){0, 0});
    }
    return ((vect2i){0, 0});
}
/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** strlen
*/

#include "includes/index.h"
#include "../assert/includes/constant.h"
#include "../assert/includes/index.h"
#include <stdlib.h>
#include <stdbool.h>

size_t (my_strlen)(register char const *restrict string, global_info_t infos)
{
    int i = 0;

    if (!string) {
        my_assert(string != NULL, infos,
            ASSERT_INFO(DESC_ERR_STRLEN_UNDEFINED, ERR_TYPE, FAIL_EXEC),
            NULL);
        return (false);
    }
    for (i = 0; string[i]; i++);
    return (i);
}
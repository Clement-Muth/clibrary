/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** error
*/

#include "../../includes/index.h"

bool error(const char *search_value, const char *replace_value)
{
    if (!search_value || !replace_value) {
        my_assert_warn_dev(search_value != NULL,
        DESC_WARN_SEARCH_VALUE_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC);
        my_assert_warn_dev(replace_value != NULL,
        DESC_WARN_REPLACE_VALUE_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC);
        return (false);
    }
    return (true);
}
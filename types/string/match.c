/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** match
*/

#include "includes/index.h"

bool match(const string_t this, const char *regex)
{
    if (regex == NULL) {
        my_assert_dev(regex != NULL, DESC_ERR_MATCH_UNDEFINED, ERR_TYPE,
        FAIL_EXEC);
        return (false);
    }
    return (!my_strcmp(this.value, regex)) ? true : false;
}
/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** match
*/

#include "includes/index.h"

bool match(const string string, const char *regex)
{
    if (regex == NULL) {
        my_assert_dev(regex != NULL, DESC_ERR_MATCH_UNDEFINED, ERR_TYPE,
        FAIL_EXEC);
        return (false);
    }
    return (!my_strcmp(string.value, regex)) ? true : false;
}
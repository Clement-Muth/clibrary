/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** match
*/

#include "../includes/index.h"
#include "../../../assert/includes/index.h"
#include "../../../assert/includes/constant.h"
#include "../../../utils/includes/index.h"

bool match(const string_t self, const char *regex)
{
    if (regex == NULL) {
        my_assert_dev(regex != NULL, PROTO_DATA,
            ASSERT_INFO(DESC_ERR_MATCH_UNDEFINED, ERR_TYPE, FAIL_EXEC));
        return (false);
    }
    return (!my_strcmp(self.value, regex)) ? true : false;
}
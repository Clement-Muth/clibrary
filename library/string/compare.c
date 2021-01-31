/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** compare
*/

#include "includes/index.h"

static int compare_c(const string_t *this, const char *str)
{
    return (my_strcmp(this->str, str));
}

int (compare)(const string_t *this, const string_t *str, global_info_t infos)
{
    my_assert(this != NULL, infos, ASSERT_INFO(DESC_ERR_THIS_UNDEFINED,
        ERR_TYPE, FAIL_EXEC), NULL);
    my_assert(str != NULL, infos, ASSERT_INFO(DESC_ERR_STR_UNDEFINED,
        ERR_TYPE, FAIL_EXEC), NULL);
    return (compare_c(this, str->str));
}
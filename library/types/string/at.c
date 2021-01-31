/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** at
*/

#include "includes/index.h"

char (at)(const string_t *this, size_t pos, global_info_t infos)
{
    my_assert(this != NULL, infos, ASSERT_INFO(DESC_ERR_THIS_UNDEFINED,
        ERR_TYPE, FAIL_EXEC), NULL);
    return (this->length >= pos) ? this->str[pos] : -1;
}
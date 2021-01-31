/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** to_int
*/

#include "includes/index.h"

int (to_int)(const string_t *this, global_info_t infos)
{
    my_assert(this != NULL, infos, ASSERT_INFO(DESC_ERR_THIS_UNDEFINED,
        ERR_TYPE, FAIL_EXEC), NULL);
    return my_atoi(this->str);
}
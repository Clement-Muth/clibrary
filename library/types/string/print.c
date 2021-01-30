/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** print
*/

#include "includes/index.h"

static jmp_buf ex_buf;

void (print)(string_t const *restrict this, global_info_t infos)
{
    TRY {
        my_assert(this != NULL, infos, ASSERT_INFO(DESC_ERR_STR_UNDEFINED,
            ERR_ALC84, FAIL_EXEC), ex_buf);
        my_putstr(this->str, 1);
    } CATCH(1) {
        my_putstr("undefined\n", 1);
    } ETRY;
}
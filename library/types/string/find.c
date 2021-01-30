/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** find
*/

#include "includes/index.h"
#include <stdio.h>

static jmp_buf ex_buf;

static int find_c(string_t const *restrict this, register char *str,
    size_t pos, jmp_buf ex_buf)
{
    char *tmp;

    if (is_undefined(this->str) || is_undefined(str)) THROW(3);
    if (this->length <= pos) THROW(2);
    tmp = my_strstr(&this->str[pos], str);
    return (tmp) ? (tmp - this->str) : (-1);
}

int (find)(string_t const *restrict this, string_t const *restrict str,
    register size_t pos, global_info_t infos)
{
    TRY {
        my_assert(this != NULL, infos, ASSERT_INFO(DESC_ERR_THIS_UNDEFINED,
            ERR_TYPE, FAIL_EXEC), ex_buf);
        my_assert(str != NULL, infos, ASSERT_INFO(DESC_ERR_STR_UNDEFINED,
            ERR_TYPE, FAIL_EXEC), ex_buf);
        return (find_c(this, str->str, pos, ex_buf));
    } CATCH(2) {
        my_warning_assert(this->length > pos, infos, ASSERT_INFO(
            DESC_ERR_FIND_BAD_POS_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC), ex_buf);
    } CATCH(3) {
        my_warning_assert(!is_undefined(this->str), infos, ASSERT_INFO(
            DESC_ERR_STR_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC), ex_buf);
        my_warning_assert(!is_undefined(str->str), infos, ASSERT_INFO(
            DESC_ERR_STR_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC), ex_buf);
    } ETRY;
    return (0);
}
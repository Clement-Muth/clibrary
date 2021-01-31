/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** assign
*/

#include "includes/index.h"
#include <string.h>

static jmp_buf ex_buf;

static void assign_c(string_t *this, register char const *restrict s)
{
    if (is_undefined(this->str) || is_undefined(s)) THROW(3);
    string_destroy(this);
    this->str = (char *)s;
    this->length = my_strlen(s);
}

void (assign)(string_t *this, string_t const *restrict str, global_info_t infos)
{
    TRY {
        my_assert(this != NULL, infos, ASSERT_INFO(DESC_ERR_THIS_UNDEFINED,
            ERR_TYPE, FAIL_EXEC), ex_buf);
        my_assert(str != NULL, infos, ASSERT_INFO(DESC_ERR_STR_UNDEFINED,
            ERR_TYPE, FAIL_EXEC), ex_buf);
        assign_c(this, str->str);
    } CATCH(1) {
        return;
    } CATCH(3) {
        my_warning_assert(!is_undefined(this->str), infos, ASSERT_INFO(
            DESC_ERR_STR_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC), ex_buf);
        my_warning_assert(!is_undefined(str->str), infos, ASSERT_INFO(
            DESC_ERR_STR_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC), ex_buf);
    } ETRY;
}
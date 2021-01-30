/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** append
*/

#include "includes/index.h"
#include <stdio.h>
#include <string.h>

static jmp_buf ex_buf;

static void append_c(string_t *this, register char const *restrict ap)
{
    char *tmp;
    char *strr;

    if (is_undefined(ap) || is_undefined(this->str)) THROW(3);
    tmp = malloc(sizeof(char) * (my_strlen(this->str) + my_strlen(ap) + 1));
    strr = my_strdup(this->str);
    tmp[0] = '\0';
    if (!tmp || !strr) return;
    if (this->str != NULL) {
        tmp = my_strcat(tmp, strr);
        tmp = my_strcat(tmp, ap);
    }
    this->str = tmp;
}

void (append)(string_t *this, string_t const *restrict ap, global_info_t infos)
{
    TRY {
        my_assert(this != NULL, infos, ASSERT_INFO(DESC_ERR_THIS_UNDEFINED,
            ERR_TYPE, FAIL_EXEC), ex_buf);
        my_assert(ap != NULL, infos, ASSERT_INFO(DESC_ERR_AP_UNDEFINED,
            ERR_TYPE, FAIL_EXEC), ex_buf);
        append_c(this, ap->str);
    } CATCH(1) {
        return;
    } CATCH(3) {
        my_warning_assert(!is_undefined(this->str), infos, ASSERT_INFO(
            DESC_ERR_STR_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC), ex_buf);
        my_warning_assert(!is_undefined(ap->str), infos, ASSERT_INFO(
            DESC_ERR_STR_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC), ex_buf);
    } ETRY;
}
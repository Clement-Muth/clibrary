/*
** EPITECH PROJECT, 2020
** clibrary
** File description:
** new_string
*/

#include "includes/index.h"
#include "../utils/includes/index.h"

static jmp_buf ex_buf;

static void init_functions(string_t *this, register char const *restrict value)
{
    this->append = append;
    this->assign = assign;
    this->at = at;
    this->length = (value) ? my_strlen(value) : (size_t)0;
    this->buffer = (value) ? MAX(this->length, ((size_t)10)) : (size_t)0;
    this->compare = compare;
    this->string_destroy = string_destroy;
    this->find = find;
    this->insert = insert;
    this->print = print;
    this->str = (value) ? my_strdup(value) : NULL;
    this->to_int = to_int;
}

string_t *(new_string)(char const *restrict value, global_info_t infos)
{
    string_t *this = malloc(sizeof(string_t));

    TRY {
        my_assert(this != NULL, infos,
            ASSERT_INFO(DESC_ERR_ALLOC_FAILED, ERR_TYPE, ERR_ALC84), ex_buf);
        my_warning_assert(value != NULL, infos,
            ASSERT_INFO(DESC_ERR_STRING_NEW_STRING_UNDEFINED,
            ERR_TYPE, FAIL_FUNC_EXEC), ex_buf);
        init_functions(this, value);
    } CATCH(1) {
        init_functions(this, UNDEFINED);
    } ETRY;
    return (this);
}
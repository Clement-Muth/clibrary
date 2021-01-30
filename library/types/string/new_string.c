/*
** EPITECH PROJECT, 2020
** clibrary
** File description:
** new_string
*/

#include "includes/index.h"
#include "../../utils/includes/index.h"

static void init_functions(string_t *this, char const *value)
{
    // this->append_c = append_c;
    // this->append = append;
    // this->assign_c = assign_c;
    // this->assign = assign;
    // this->at = at;
    this->length = (value) ? my_strlen(value) : (size_t)0;
    this->buffer = (value) ? MAX(this->length, ((size_t)10)) : (size_t)0;
    // this->c_str = c_str;
    // this->clear = clear;
    // this->compare_c = compare_c;
    // this->compare = compare;
    // this->copy = copy;
    // this->empty = empty;
    this->find_c = find_c;
    this->find = find;
    // this->insert_c = insert_c;
    // this->insert = insert;
    this->print = print;
    this->str = (value) ? my_strdup(value) : NULL;
}

string_t *(new_string)(char const *value, global_info_t infos)
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
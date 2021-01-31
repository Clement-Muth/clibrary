/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** insert
*/

#include "includes/index.h"
#include <string.h>

static jmp_buf ex_buf;

static void string_realloc(string_t *this, register size_t size) {
    char *buffer = malloc(size);

    if (!buffer) THROW(1);
    if (size > this->buffer) {
        size = MAX(size, BUFFER_MIN);
        my_strcpy(buffer, this->str);
        if (this->str) free(this->str);
        this->str = buffer;
        this->buffer = size;
    }
}

static void insert_c(string_t *this, register size_t pos,
    string_t const *restrict str)
{
    int length = my_strlen(str->str);

    if (pos > this->length) {
        this->append(this, str);
        return;
    }
    if (((int) this->buffer - (int) this->length - length - 1) < 0)
        string_realloc(this, this->length + length + 1);
    my_strcpy(&this->str[pos] + length, &this->str[pos]);
    my_strncpy(&this->str[pos], str->str, length);
    this->length += length;
}

void (insert)(string_t *this, size_t pos, string_t const *restrict str,
    global_info_t infos)
{
    TRY {
        my_assert(this != NULL, infos, ASSERT_INFO(DESC_ERR_THIS_UNDEFINED,
            ERR_TYPE, FAIL_EXEC), ex_buf);
        my_assert(str != NULL, infos, ASSERT_INFO(DESC_ERR_STR_UNDEFINED,
            ERR_TYPE, FAIL_EXEC), ex_buf);
        insert_c(this, pos, str);
    } CATCH(1) {
        my_assert(NULL, infos, ASSERT_INFO(
            DESC_ERR_ALLOC_FAILED, ERR_ALC84, FAIL_EXEC), ex_buf);
    } ETRY;
}
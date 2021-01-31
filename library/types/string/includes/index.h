/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#pragma once

#include "../../../includes/assert.h"
#include "../../../includes/constant.h"
#include "../../../utils/includes/index.h"
#include "structs.h"

/**
 * Returns a string object.
 * This function is not a possible cancellation point and therefore if an error
 * occured, a warning will be my_assertn.
 * @param value The value of new string object.
 * @return string_t
 */
#define new_string(value) new_string(value, PROTO_DATA)

string_t *(new_string)(register char const *restrict value,
    global_info_t infos);

void string_destroy(string_t *this);
char at(const string_t *this, size_t pos);
void clear(string_t *this);
int size(const string_t *this);
int compare(const string_t *this, const string_t *str);
int compare_c(const string_t *this, const char *str);
size_t copy(const string_t *this, char *s, size_t n, size_t pos);
const char *c_str(const string_t *this);
int empty(const string_t *this);
void insert(string_t *this, size_t pos, const string_t *str);
void insert_c(string_t *this, size_t pos, const char *str);
int to_int(const string_t *this);

/**
 * @brief Appends the content of ap to that of the current instance.
 * @param this Current instance
 * @param ap value to append
 * @return (void)
 */
#define append(this, ap) append(this, ap, PROTO_DATA)

void (append)(string_t *this, string_t const *restrict ap, global_info_t infos);

/**
 * @brief Sets the content of the current instance to that of str.
 * @param this Current instance
 * @param str String to assign
 * @return void
 */
#define assign(this, str) assign(this, str, PROTO_DATA)

void (assign)(string_t *this, string_t const *restrict str,
    global_info_t infos);

/**
 * @brief Searches for the first occurence of str’s content in the
 * current instance, starting from the pos position.
 * @param this Current instance
 * @param str String to find...
 * @param pos Beginin position
 * @return int
 */
#define find(this, str, pos) find(this, str, pos, PROTO_DATA)

int (find)(string_t const *restrict this, string_t const *restrict str,
    register size_t pos, global_info_t infos);

/**
 * @brief Displays the content of the current instance to the standard output.
 * @param print Current instance
 * @return void
 */
#define print(this) print(this, PROTO_DATA)

void (print)(string_t const *restrict this, global_info_t infos);
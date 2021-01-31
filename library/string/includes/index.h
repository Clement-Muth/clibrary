/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#pragma once

#include "../../includes/assert.h"
#include "../../includes/constant.h"
#include "../../utils/includes/index.h"
#include "structs.h"
#include "macro.h"

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

/**
 * @brief Inserts additional characters into the string right before the
 * character indicated by pos
 * @param this Current instance
 * @param pos Position
 * @param str Object ot insert
 * @return (string_t *)
 */
#define insert(this, pos, str) insert(this, pos, str, PROTO_DATA);

void (insert)(string_t *this, size_t pos, string_t const *restrict str,
    global_info_t infos);

/**
 * @brief Returns the character at position x
 * @param this
 * @param pos
 * @return (char)
 */
#define at(this, pos) at(this, pos, PROTO_DATA)

char (at)(const string_t *this, size_t pos, global_info_t infos);

/**
 * @brief Casts to int
 * @param this Current instance
 * @return (int)
 */
#define to_int(this) to_int(this, PROTO_DATA)

int (to_int)(const string_t *this, global_info_t infos);

/**
 * @brief Compares two string object
 * @param this Current instance
 * @param str Object to compare
 * @return (int)
 */
#define compare(this, str) compare(this, str, PROTO_DATA)

int (compare)(const string_t *this, const string_t *str, global_info_t infos);
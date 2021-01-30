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
 */
#define new_string(value) new_string(value, PROTO_DATA)

string_t *(new_string)(char const *value, global_info_t infos);

void string_init(string_t *this, const char *s);
void string_destroy(string_t *this);
void assign(string_t *this, const string_t *str);
void assign_c(string_t *this, const char *s);
void append(string_t *this, const string_t *ap);
void append_c(string_t *this, const char *ap);
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
 * @brief searches for the first occurence of str’s content in the
 * current instance, starting from the pos position.
 * @param this current instance
 * @param str string to find...
 * @param pos beginin position
 * @return int
 */
#define find(this, str, pos) find(this, str, pos, PROTO_DATA)

int (find)(const string_t *this, const string_t *str, size_t pos,
    global_info_t infos);

/**
 * @brief displays the content of the current instance to the standard output.
 * @param print current instance
 * @return void
 */
#define print(this) print(this, PROTO_DATA)

void (print)(string_t const *this, global_info_t infos);
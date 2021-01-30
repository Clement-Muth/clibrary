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
 * occured, a warning will be thrown.
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
int find(const string_t *this, const string_t *str, size_t pos);
int find_c(const string_t *this, char *str, size_t pos);
void insert(string_t *this, size_t pos, const string_t *str);
void insert_c(string_t *this, size_t pos, const char *str);
int to_int(const string_t *this);
void print(string_t const *this);
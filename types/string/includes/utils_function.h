/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** utils_function
*/

#ifndef STEING_UTILS_FUNCTION_H_
#define STEING_UTILS_FUNCTION_H_

#include "index.h"

vect2i search_position(string_t *this, const char *search_value);
char *replacing(string_t *this, char **copy, const char *replace_value);
char **replace_create_copy(string_t *this, char **copy, vect2i position, int i);
char **copy_current_and_after(string_t *this, char **copy,
                              vect2i position, int i);
bool replace_error(const char *search_value, const char *replace_value);
string_t this_constructor(const char *value);

#endif /* !STEING_UTILS_FUNCTION_H_ */
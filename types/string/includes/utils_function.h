/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** utils_function
*/

#ifndef STEING_UTILS_FUNCTION_H_
#define STEING_UTILS_FUNCTION_H_

#include "index.h"

vect2i search_position(string *string, const char *search_value);
char *replacing(string *string, char **copy, const char *replace_value);
char **replace_create_copy(string *string, char **copy, vect2i position, int i);
char **copy_current_and_after(string *string, char **copy,
                              vect2i position, int i);
bool error(const char *search_value, const char *replace_value);

#endif /* !STEING_UTILS_FUNCTION_H_ */
/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef UTILS_INDEX_H_
#define UTILS_INDEX_H_

#include "../../includes/index.h"
#include <unistd.h>

/**
 * Duplicate S, returning an identical malloc'd string.
 * @param string The string to assign.
 */
char *my_strdup(const char *string);

/**
 * Copy memory to memory until the specified number of bytes has been copied.
 * @param dest The destination of copy.
 * @param src The string to copy.
 * @param length The length of dest and src.
 */
void *my_memcpy(void *dest, const void *src, size_t length);

/**
 * Return the length of a string.
 * @param dest The string to get the length.
 */
size_t my_strlen(const char *string);

/**
 * Returns a string that contains the concatenation of two or more strings.
 * @param dest The destination of concat
 * @param src The strings to append to the end of the string.
 */
char *my_strcat(char *dest, const char *src);

/**
 * Compare S1 and S2, returning less than, equal to or
 * greater than zero if S1 is lexicographically less than,
 * equal to or greater than S2.
 * @param p1 The string compared.
 * @param p2 The string to compare.
 */
int my_strcmp(const char *p1, const char *p2);

#endif /* !UTILS_INDEX_H_ */
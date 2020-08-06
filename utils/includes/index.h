/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef UTILS_INDEX_H_
#define UTILS_INDEX_H_

#include "../../includes/constant.h"
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

#endif /* !UTILS_INDEX_H_ */
/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef UTILS_INDEX_H_
#define UTILS_INDEX_H_

#include <stddef.h>
#include "../../includes/macro.h"
#include "../../includes/struct.h"

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
void *my_memcpy(void *dest, const void *src, int length);


/**
 * @brief Return the length of the null-terminated string STR.
 * @param string
 * @return int
 */
#define my_strlen(string) my_strlen(string, PROTO_DATA)

size_t (my_strlen)(const char *string, global_info_t infos);

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

/**
 * Returns the type of var
 * @param var Variable to determinate type
 */
int get_type(const void *var);

/**
 * Write a character to the console.
 * @param character The character to write.
 * @param fd The output where the character must be write.
 */
void my_putchar(char character, int fd);

/**
 * Write a string to the console.
 * @param string The string to write.
 * @param fd The output where the character must be write.
 */
void my_putstr(char *string, int fd);

/**
 * Converts a string to an integer
 * @param string The string to convert.
 */
int my_atoi(const char *restrict string);

/**
 * Converts a string to an integer
 * @param num The number to convert.
 */
char *my_itoa(int num);

int my_revstr(char *string);

/**
 * @brief Locate the first occurence of a substring in a string.
 * @param char
 * @param substring
 * @return first occurence
 */
char *my_strstr(register char *string, char *substring);

#endif /* !UTILS_INDEX_H_ */
/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef UTILS_INDEX_H_
#define UTILS_INDEX_H_

#include <stdio.h>
#include <stddef.h>
#include "../../includes/macro.h"
#include "../../includes/struct.h"

/**
 * Duplicate S, returning an identical malloc'd string.
 * @param string The string to assign.
 */
char *my_strdup(char const *restrict string);

/**
 * Copy memory to memory until the specified number of bytes has been copied.
 * @param dest The destination of copy.
 * @param src The string to copy.
 * @param length The length of dest and src.
 */
void *my_memcpy(void *dest, void const *restrict src,
    register int length);


/**
 * @brief Return the length of the null-terminated string STR.
 * @param string
 * @return int
 */
#define my_strlen(string) my_strlen(string, PROTO_DATA)

size_t (my_strlen)(register char const *restrict string, global_info_t infos);

/**
 * Returns a string that contains the concatenation of two or more strings.
 * @param dest The destination of concat
 * @param src The strings to append to the end of the string.
 */
char *my_strcat(register char *dest, register char const *restrict src);

/**
 * Compare S1 and S2, returning less than, equal to or
 * greater than zero if S1 is lexicographically less than,
 * equal to or greater than S2.
 * @param p1 The string compared.
 * @param p2 The string to compare.
 */
int my_strcmp(register char const *restrict p1,
    register char const *restrict p2);

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
void my_putstr(register char *string, int fd);

/**
 * Converts a string to an integer
 * @param string The string to convert.
 */
int my_atoi(register char const *restrict string);

/**
 * Converts a string to an integer
 * @param num The number to convert.
 */
char *my_itoa(int num);

int my_revstr(register char *string);

/**
 * @brief Locate the first occurence of a substring in a string.
 * @param char
 * @param substring
 * @return first occurence
 */
char *my_strstr(register char *string, register char *substring);


/**
 * @brief Fill a block of memory with a particular value.
 * @param dest
 * @param val
 * @param length
 * @return (void *)
 */
void *my_memset(void *dest, int val, register size_t length);

/**
 * @brief Copy the content of one string into another.
 * @param dest Destination string
 * @param src Source string
 * @return (char *)
 */
char *my_strcpy(char *dest, char const *restrict src);

/**
 * @brief Returns the number of characters before a null-byte in the string
 * pointed to by str, unless there's no null-byte before maxlen. In the latter
 * case maxlen is returned.
 * @param string
 * @param maxlength
 * @return (size_t)
 */
size_t my_strnlen(char const *restrict string, size_t maxlength);

/**
 * @brief Copies the first num characters of source to destination.
 * @param s1
 * @param size_t
 * @param n
 * @return (char *)
 */
char *my_strncpy(char *s1, char const *restrict s2, register size_t n);

#endif /* !UTILS_INDEX_H_ */
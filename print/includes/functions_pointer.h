/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** functions_pointer
*/

#ifndef FUNCTIONS_POINTER_H_
#define FUNCTIONS_POINTER_H_

#include <stdlib.h>

/**
 * Write a letter to the console.
 * @param matcher The character to write.
 * @param matcher The output where the character must be write.
 */
void warn(const void *data);
ssize_t error(const char *error);
ssize_t logger(const char *message);

#endif /* !FUNCTIONS_POINTER_H_ */
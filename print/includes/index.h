/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef PRINT_INDEX_H_
#define PRINT_INDEX_H_

#include "structs.h"

/**
 * Returns initilised console struct.
 */
console_t init_console();

/**
 * Write a letter to the console.
 * @param matcher The character to write.
 * @param matcher The output where the character must be write.
 */
void print(char character, int fd);

ssize_t print_color(const char *string, const char *hex_color, int fd);

#endif /* !PRINT_INDEX_H_ */
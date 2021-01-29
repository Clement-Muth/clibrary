/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef PRINT_INDEX_H_
#define PRINT_INDEX_H_

#include "structs.h"
#include "../../includes/macro.h"
#include "../../types/string/includes/structs.h"
#include "../../types/number/includes/structs.h"

/**
 * Create a new console
 */
console_t new_console();

void print_color(const char *string, const char *hex_color, int fd);


#define logger(expr, ...) logger(expr, _N__ARG(__VA_ARGS__), ##__VA_ARGS__)
/**
 * Write a letter to the console.
 * @param matcher The character to write.
 * @param matcher The output where the character must be write.
 */
void warn(const void *data);
void error(const char *error);
void (logger)(const void *expr, int n_args, ...);


#endif /* !PRINT_INDEX_H_ */
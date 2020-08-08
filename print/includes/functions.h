/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** functions
*/

#ifndef PRINT_FUNCTIONS_H_
#define PRINT_FUNCTIONS_H_

/**
 * Returns initilised console struct.
 */
console init_console();

/**
 * Write a letter to the console.
 * @param matcher The character to write.
 * @param matcher The output where the character must be write.
 */
void print(char character, int fd);

/**
 * Write a letter to the console.
 * @param matcher The character to write.
 * @param matcher The output where the character must be write.
 */
void warn(const void *data);
ssize_t error(const char *error);
ssize_t logger(const char *message);
ssize_t print_color(const char *string, const char *hex_color, int fd);

#endif /* !PRINT_FUNCTIONS_H_ */
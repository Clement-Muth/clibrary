/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef INDEX_H_
#define INDEX_H_

#include "header.h"

print_t init_print();
ssize_t print(char character, int fd);
ssize_t warn(const char *error);
ssize_t error(const char *error);
ssize_t logger(const char *message);
ssize_t print_color(const char *string, const char *hex_color, int fd);

#endif /* !INDEX_H_ */
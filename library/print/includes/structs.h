/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** structs
*/

#ifndef PRINT_STRUCTS_H_
#define PRINT_STRUCTS_H_

#include <stdlib.h>
typedef struct console_s
{
    void (*warn)(const void *data);
    void (*logger)(const void *data, int n_args, ...);
    void (*error)(const char *error);
} console_t;

#endif /* !PRINT_STRUCTS_H_ */
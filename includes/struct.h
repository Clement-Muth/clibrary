/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

#include <stdbool.h>

typedef struct print_s
{
    ssize_t (*warn)(const char *warning);
    ssize_t (*logger)(const char *message);
    ssize_t (*error)(const char *error);
} print_t;

typedef struct string
{
    char *value;
    size_t length;
    char *(*concat)(struct string *string, const char *src);
    char *(*replace)(struct string *string, const char *search_value,
        const char *replace_value);
    char *(*slice)(const char *start, const char *end);
    bool (*match)(const char *matcher);
    int (*index_of)(const char *search_string, int position);
    int (*last_index_of)(const char *search_string, int position);
    char *(*substr)(int from, int length);
} string;

typedef struct vect2i_s
{
    int x;
    int y;
} vect2i;



#endif /* !STRUCT_H_ */
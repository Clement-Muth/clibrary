/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** struct
*/

#ifndef STRINGIFY_STRUCT_H_
#define STRINGIFY_STRUCT_H_

#include <stdbool.h>
#include <stdlib.h>
#include "../../../includes/struct.h"

typedef struct string_s
{
    char *value;
    size_t length;
    struct string_s (*concat)(struct string_s *string, const void *src);
    void (*replace)(struct string_s *string, const char *search_value,
                    const char *replace_value);
    char *(*slice)(const char *start, const char *end);
    bool (*match)(const struct string_s string, const char *matcher);
    vect2i (*index_of)(const struct string_s *this, const char *search_string);
    int (*last_index_of)(const char *search_string, int position);
    char *(*substr)(int from, int length);
    char *type;
    int status;
} string_t;

#endif /* !STRINGIFY_STRUCT_H_ */
/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** struct
*/

#ifndef STRINGIFY_STRUCT_H_
#define STRINGIFY_STRUCT_H_

typedef struct string
{
    char *value;
    size_t length;
    struct string (*concat)(struct string *string, const char *src);
    void (*replace)(struct string *string, const char *search_value,
        const char *replace_value);
    char *(*slice)(const char *start, const char *end);
    bool (*match)(const char *matcher);
    int (*index_of)(const char *search_string, int position);
    int (*last_index_of)(const char *search_string, int position);
    char *(*substr)(int from, int length);
    char *type;
    struct string *self;
} string;

#endif /* !STRINGIFY_STRUCT_H_ */
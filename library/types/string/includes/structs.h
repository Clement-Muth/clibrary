/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** struct
*/

#pragma once

#include <stdbool.h>
#include <stdlib.h>
#include "../../../includes/struct.h"
#include "macro.h"

typedef struct string_s
{
    char *str;
    size_t buffer;
    size_t length;

    char (*at)(const struct string_s *this, size_t pos);
        const char *(*c_str)(const struct string_s *this);
    int (*compare_c)(const struct string_s *this, const char *str);
    int (*compare)(const struct string_s *this, const struct string_s *str);
    int (*empty)(const struct string_s *this);
    int (*find)(const struct string_s *this, struct string_s const *restrict str
        , register size_t pos, global_info_t infos);
    int (*size)(const struct string_s *this);
    size_t (*copy)(const struct string_s *this, char *s, size_t n, size_t pos);
    void (*append)(struct string_s *this, struct string_s const *restrict ap,
        global_info_t infos);
    void (*assign)(struct string_s *this, struct string_s const *restrict str,
        global_info_t infos);
    void (*clear)(struct string_s *this);
    struct string_s *(*insert)(struct string_s *this, size_t pos,
    struct string_s const *restrict str, global_info_t infos);
    void (*string_destroy)(struct string_s *this);
    void (*string_init)(struct string_s *this, register char const *restrict s);
    int (*to_int)(const struct string_s *this);
    void (*print)(struct string_s const *restrict this, global_info_t infos);
} string_t;
/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** struct
*/

#pragma once

#include <stdbool.h>
#include <stdlib.h>
#include "../../includes/struct.h"
#include "macro.h"

typedef struct string_s
{
    char *str;
    size_t buffer;
    size_t length;

    char (*at)(const struct string_s *this, size_t pos, global_info_t infos);
        const char *(*c_str)(const struct string_s *this);
    int (*compare)(struct string_s const *restrict this,
        struct string_s const *restrict str, global_info_t infos);
    int (*find)(const struct string_s *this, struct string_s const *restrict str
        , register size_t pos, global_info_t infos);
    void (*append)(struct string_s *this, struct string_s const *restrict ap,
        global_info_t infos);
    void (*assign)(struct string_s *this, struct string_s const *restrict str,
        global_info_t infos);
    void (*insert)(struct string_s *this, size_t pos,
    struct string_s const *restrict str, global_info_t infos);
    void (*string_destroy)(struct string_s *this);
    void (*string_init)(struct string_s *this, register char const *restrict s);
    int (*to_int)(const struct string_s *this, global_info_t infos);
    void (*print)(struct string_s const *restrict this, global_info_t infos);
} string_t;
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
    int (*find_c)(const struct string_s *this, char *str, size_t pos);
    int (*find)(const struct string_s *this,
        const struct string_s *str,size_t pos);
    int (*size)(const struct string_s *this);
    size_t (*copy)(const struct string_s *this, char *s, size_t n, size_t pos);
    void (*append_c)(struct string_s *this, const char *ap);
    void (*append)(struct string_s *this, const struct string_s *ap);
    void (*assign_c)(struct string_s *this, const char *s);
    void (*assign)(struct string_s *this, const struct string_s *str);
    void (*clear)(struct string_s *this);
    void (*insert_c)(struct string_s *this, size_t pos, const char *str);
    void (*insert)(struct string_s *this, size_t pos,
        const struct string_s *str);
    void (*string_destroy)(struct string_s *this);
    void (*string_init)(struct string_s *this, const char *s);
    int (*to_int)(const struct string_s *this);
    void (*print)(struct string_s const *this, global_info_t infos);
} string_t;
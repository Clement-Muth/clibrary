/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef ASSERT_INDEX_H_
#define ASSERT_INDEX_H_

#include "../../includes/index.h"
#include <stdlib.h>
#include "constant.h"

typedef struct global_info
{
    char *file;
    char *time;
    const char *func;
    int line;
} global_info;

#define my_assert_dev(expr, ...) (expr) ? (1) : my_assert_fail_dev(#expr, \
(struct global_info){.file = __FILE__, .line = __LINE__, .time = __TIME__ \
                    , .func = __func__}, ##__VA_ARGS__)

#define my_assert(expr) (expr) ? (1) : my_assert_fail(#expr, __FILE__, __LINE__\
, __func__)

/* Evalue the expr and abort if it's true */
int(my_assert_fail_dev)(const char *assertion, global_info infos, ...);

int my_assert_fail(const char *assertion, const char *file, const int line,
                    const char *func);

#endif /* !ASSERT_INDEX_H_ */
/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef ASSERT_INDEX_H_
#define ASSERT_INDEX_H_

#include "../../includes/macro.h"
#include "../../includes/struct.h"

/**
 * Evaluates expression and throw error if it false
 * @param expr Expression to evaluate.
 * @param DESC_ERR_XXX_FAILED description of error.
 * @param ERR_XXX Num of error.
 * @param FAIL_XXX Type of error.
 */
#define my_assert_dev(expr, infos, assert_data) (expr) ? (1) : \
my_assert_fail_dev(#expr, infos, assert_data)

/**
 * Evaluates expression and throw error if it false
 * @param expr Expression to evaluate.
 * @param DESC_WARN_XXX_FAILED description of error.
 * @param WARN_XXX Num of error.
 * @param FAIL_WARN_XXX Type of error.
 */
#define my_assert_warn_dev(expr, ...) (expr) ? (1) : my_assert_warn_fail_dev( \
    #expr, (struct global_info_s){.file = __FILE__, .line = __LINE__, \
    .time = __TIME__ , .func = __func__}, _N__ARG(__VA_ARGS__), ##__VA_ARGS__)

#define my_assert(expr) (expr) ? (1) : my_assert_fail(#expr, __FILE__, __LINE__\
, __func__)

/* Evalue the expr and abort if it's true */
int(my_assert_fail_dev)(const char *assertion, global_info_t infos, \
    assert_info_t assert_data);

/* Evalue the expr and abort if it's true */
int(my_assert_warn_fail_dev)(const char *assertion, global_info_t infos, int n_arg
                            , ...);

int my_assert_fail(const char *assertion, const char *file, const int line,
                    const char *func);

#endif /* !ASSERT_INDEX_H_ */
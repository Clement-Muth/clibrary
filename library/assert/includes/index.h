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
#include "constant.h"

/**
 * Evaluates expression and throw error if it false
 * @param expr Expression to evaluate.
 * @param DESC_ERR_XXX_FAILED description of error.
 * @param ERR_XXX Num of error.
 * @param FAIL_XXX Type of error.
 */
#define my_assert_dev(expr, infos, assert_data) (expr) ? (1) : \
throw(#expr, infos, assert_data)

/* Evalue the expr and abort if it's true */
int (throw)(char const *assertion, global_info_t infos, \
    assert_info_t assert_data);

#endif /* !ASSERT_INDEX_H_ */
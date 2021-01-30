/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#pragma once

#include <setjmp.h>
#include <stdio.h>
#include "../../includes/macro.h"
#include "../../includes/struct.h"
#include "constant.h"
#include "macro.h"

/**
 * Evaluates expression and my_assert error if it false
 * @param expr Expression to evaluate.
 * @param DESC_ERR_XXX_FAILED description of error.
 * @param ERR_XXX Num of error.
 * @param FAIL_XXX Type of error.
 */
#define my_assert(expr, infos, assert_data, jmp) (expr) ? (1) : \
my_assert(#expr, infos, assert_data, jmp)

/* Evalue the expr and abort if it's true */
int (my_assert)(char const *assertion, global_info_t infos, \
    assert_info_t assert_data, jmp_buf ex_buf);

/**
 * Evaluates expression and my_assert warning if it false
 * @param expr Expression to evaluate.
 * @param DESC_WARN_XXX_FAILED description of warning.
 * @param WARN_XXX Num of warning.
 * @param FAIL_XXX Type of error.
 */
#define my_warning_assert(expr, infos, assert_data, jmp) (expr) ? (1) : \
my_warning_assert(#expr, infos, assert_data, jmp)

/* Evalue the expr and print warning if it's true */
int (my_warning_assert)(char const *assertion,
    global_info_t infos, assert_info_t assert_data, jmp_buf ex_buf);
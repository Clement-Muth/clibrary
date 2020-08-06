/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef ASSERT_INDEX_H_
#define ASSERT_INDEX_H_

#include "../../includes/index.h"

#define my_assert(expr) (expr) ? (1) : my_assert_fail(#expr, \
__FILE__, __LINE__, __func__)

/* Evalue the expr and abort if it's true */
int my_assert_fail(const char *assertion, const char *file, unsigned line,
const char *function);
    

#endif /* !ASSERT_INDEX_H_ */
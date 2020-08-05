/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef ASSERT_INDEX_H_
#define ASSERT_INDEX_H_

#include "../../includes/index.h"

#if defined __cplusplus && __GNUC_PREREQ(2, 95)
    #define __VOID_CAST static_cast<void>
#else
    #define __VOID_CAST (void)(0)
#endif

#define my_assert(expr) ((expr) ? (__VOID_CAST) : my_assert_fail(#expr, \
__FILE__, __LINE__, __func__))

/* Evalue the expr and abort if it's true */
bool my_assert_fail(const char *assertion, const char *file, unsigned line,
const char *function);
    

#endif /* !ASSERT_INDEX_H_ */
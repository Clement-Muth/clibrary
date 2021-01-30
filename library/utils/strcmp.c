/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** strcmp
*/

#include "../assert/includes/constant.h"
#include "../assert/includes/index.h"
#include "includes/index.h"
#include <stdbool.h>
#include <stdio.h>

int my_strcmp(register char const *restrict p1,
    register char const *restrict p2)
{
    const unsigned char *s1 = (const unsigned char *)p1;
    const unsigned char *s2 = (const unsigned char *)p2;
    unsigned char c1, c2;

    if (p1 == NULL || p2 == NULL) {
        my_assert(p1 != NULL, PROTO_DATA,
            ASSERT_INFO(DESC_ERR_STRCMP_S1_UNDEFINED, ERR_TYPE, FAIL_EXEC),
            NULL);
        my_assert(p2 != NULL, PROTO_DATA,
            ASSERT_INFO(DESC_ERR_STRCMP_S2_UNDEFINED, ERR_TYPE, FAIL_EXEC),
            NULL);
        return (-1);
    }
    do {
        c1 = (unsigned char) *s1++;
        c2 = (unsigned char) *s2++;
        if (c1 == '\0')
        return (c1 - c2);
    } while (c1 == c2);
    return (c1 - c2);
}
/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** strcmp
*/

#include "includes/index.h"

int my_strcmp(const char *p1, const char *p2)
{
    const unsigned char *s1 = (const unsigned char *) p1;
    const unsigned char *s2 = (const unsigned char *) p2;
    unsigned char c1, c2;

    if (p1 == NULL || p2 == NULL) {
        my_assert_dev(p1 != NULL, DESC_ERR_STRCMP_S1_UNDEFINED, ERR_TYPE,
        FAIL_EXEC);
        my_assert_dev(p2 != NULL, DESC_ERR_STRCMP_S2_UNDEFINED, ERR_TYPE,
        FAIL_EXEC);
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
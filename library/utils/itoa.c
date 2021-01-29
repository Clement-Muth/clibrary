/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** itoa
*/

#include "includes/index.h"
#include <stdbool.h>
#include <stdlib.h>

static bool check(int number, bool neg, int i, char *string)
{
    if (number == 0) {
        string[i++] = '0';
        string[i] = '\0';
        return (false);
    }
    if (number < 0) {
        neg = true;
        number = -number;
    }
    return (true);
}

static int size_int(int nb)
{
    int n = nb;
    int i = 1;

    while (n > 9) {
        n = n / 10;
        ++i;
    }
    return (i);
}

char *my_itoa(int number)
{
    int i = 0;
    int rem = 0;
    int base = 10;
    bool neg = false;
    char *string = malloc((sizeof(int) * size_int(number)) + 1);

    if (!check(number, neg, i, string)) return (string);
    while (number != 0) {
        rem = number % base;
        string[i++] = (rem > 9)? (rem - 10) + 'a' : rem + '0';
        number = number/base;
    }
    if (neg) string[i++] = '-';
    string[i] = '\0';
    my_revstr(string);
    return string;
}
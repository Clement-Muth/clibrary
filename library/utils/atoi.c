/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** atoi
*/

int my_atoi(const char *restrict string)
{
    int result = 0;
    unsigned int digit;
    const char sign = string[0];

    if (*string == '-')
        ++string;
    else
        if (*string == '+')
            ++string;
    for (; string; ++string) {
        digit = *string - '0';
        if (digit > 9)
            break;
        result = (10 * result) + digit;
    }
    if (sign == '-')
        return -(result);
    return (result);
}
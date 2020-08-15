/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** new_string_a
*/

#include "includes/index.h"

static int number_of_element(const char **values)
{
    int i = 0;

    for (i = 0; values[i]; i++)
        ;
    return (i);
}

static string_t *create_string_values_array(const char **values,
                                          const int nbr_of_element)
{
    string_t *array = malloc(sizeof(string_t) * (nbr_of_element));

    for (int i = 0; i != nbr_of_element; i++)
        array[i] = new_string(values[i]);
    return (array);
}

array_s new_string_a(const char **values)
{
    const int nbr_of_element = number_of_element(values);
    string_t *values_array = create_string_values_array(values, nbr_of_element);
    array_s array;

    array.string = malloc(sizeof(char *) * (nbr_of_element));
    if (!array.string) {
        my_assert_dev(array.string != NULL, DESC_ERR_ALLOC_FAILED, ERR_ALC84,
        FAIL_EXEC);
    }
    array.string = values_array;
    array.length = nbr_of_element - 1;
    array.foreach = foreach;
    array.find = find;
    array.push = push;
    array.copy = copy;
    array.type = "array_s";
    return (array);
}
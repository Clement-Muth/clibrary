/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** create_array_s
*/

#include "includes/index.h"

static int number_of_element(const char **values)
{
    int i = 0;

    for (i = 0; values[i]; i++)
        printf("%s\n", values[i]);
    return (i);
}

static string *create_string_values_array(const char **values, const int nbr_of_element)
{
    string *array = malloc(sizeof(string) * (nbr_of_element));

    printf("%d\n", nbr_of_element);
    for (int i = 0; i != nbr_of_element; i++)
        array[i] = create_string(values[i]);
    return (array);
}

array_s create_array_s(const char **values)
{
    printf("%s\n", values[0]);
    const int nbr_of_element = number_of_element(values);
    string *values_array = create_string_values_array(values, nbr_of_element);
    array_s array;

    array.string = malloc(sizeof(char *) * (nbr_of_element + 1));
    array.string = values_array;
    array.element = nbr_of_element;
    array.type = "array_s";
    return (array);
}
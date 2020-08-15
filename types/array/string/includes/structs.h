/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** struct
*/

#ifndef ARRAY_S_STRUCT_H_
#define ARRAY_S_STRUCT_H_

typedef struct array_s
{
    struct string_s *string;
    char *type;
    int length;
    /**
     * Returns array after performing.
     * @param e Macro E
     */
    void (*foreach)(const struct array_s *e);
    /**
     * Returns finded string or NULL.
     * @param e Macro E
     */
    void (*find)(const struct array_s e);
    /**
     * Appends new elements to an array, and returns the new length of the array
     * @param array Array destination.
     * @param item New element of the Array.
     * @param index? Index where the element must be appened.
     */
    struct number (*push)(struct array_s *array, const void *item, ...);
    /**
     * Returns a copy of an array as char **.
     * @param array Array to copy.
     */
    char **(*copy)(const struct array_s *array);
} array_s;

#endif /* !ARRAY_S_STRUCT_H_ */
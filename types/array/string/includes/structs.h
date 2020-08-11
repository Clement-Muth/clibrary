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
    struct string *string;
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
} array_s;

#endif /* !ARRAY_S_STRUCT_H_ */
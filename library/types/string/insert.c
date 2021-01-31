/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** insert
*/

#include "includes/index.h"

static void insert_c(string_t *this, size_t pos, const char *str)
{
    char *before = malloc(pos + 1);
    char *after;
    string_t insert;

    if (!this || !this->str || !str || (int)pos < 0)
        return;
    after = malloc(my_strlen(str) - pos + 1);
    if (pos >= this->length)
		return this->append(this, str);
    for (int i = 0; i <= (int)pos; i++)
        before[i] = this->str[i];
    before[pos + 1] = '\0';
    for (int i = pos + 1, n = 0; this->str[i]; i++, n++)
        after[n] = this->str[i];
    after[(my_strlen(str) - pos)] = '\0';
    string_init(&insert, before);
    insert.append(&insert, str);
    insert.append(&insert, after);
    this->assign(this, &insert);
}

void (insert)(string_t *this, size_t pos, const string_t *str,
    global_info_t infos)
{
    insert_c(this, pos, str->str);
}
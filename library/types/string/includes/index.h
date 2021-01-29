/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** index
*/

#ifndef STRINGIFY_INDEX_H_
#define STRINGIFY_INDEX_H_

#include "../../../includes/constant.h"
#include "../../../assert/includes/index.h"
#include "../../../assert/includes/constant.h"
#include "structs.h"
#include <stdbool.h>

/**
 * Returns a string that contains the concatenation of two or more strings.
 * @param dest The destination of concat
 * @param src The strings to append to the end of the string.
 */
string_t concat(string_t *self, const void *src);

/**
 * Replaces text in a string, using a regular expression or search string.
 * @param string Current object
 * @param search_value A string to search for.
 * @param replace_value A string containing the text to replace for every
 * successful match of searchValue in this string.
 */
void replace(string_t *self, const char *search_value,
             const char *replace_value);

/**
 * Matches a string that supports being matched against, and
 * returns an array
 * containing the results of that search, or null if no matches are found.
 * @param matcher A string that supports being matched against.
 */
bool match(const string_t self, const char *regex);

/**
 * Returns the position of the first occurrence of a substring.
 * @param search_string The substring to search for in the string
 * @param position The index at which to begin searching the String.
 * If omitted, search starts at the beginning of the string.
 */
vect2i index_of(const string_t *self, const char *search_string);

/**
 * Returns the last occurrence of a substring in the string.
 * @param searchString The substring to search for.
 * @param position The index at which to begin searching.
 * If omitted, the search begins at the end of the string.
 */
int last_index_of(const char *search_string, int position);

/**
 * Gets a substring beginning at the specified location and havingthe
 * specified length.
 * @param from The starting position of the desired substring. The index
 * of the first character in the string is zero.
 * @param length The number of characters to include in the returned substring.
 */
char *substr(int from, int length);

/**
 * Returns a string object.
 * This function is not a possible cancellation point and therefore if an error
 * occured, a warning will be thrown.
 * @param value The value of new string object.
 */
#define new_string(value)                                               \
    new_string((global_info_t){.file = __FILE__, .func = __func__,  \
                            .line = __LINE__, .time = __TIME__}, value)

string_t this_constructor(const char *value);

static inline string_t (new_string)(global_info_t info, const char *value)
{
    if (value == NULL) {
        my_assert_warn_dev(value != NULL,
        DESC_WARN_SEARCH_VALUE_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC);
        return (this_constructor(UNDEFINED));
    }
    return (this_constructor(value));
}

#endif /* !STRINGIFY_INDEX_H_ */

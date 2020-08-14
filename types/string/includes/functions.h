/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** function
*/

#ifndef STRINGIFY_FUNCTION_H_
#define STRINGIFY_FUNCTION_H_

/**
 * Returns a struct that contains the string object.
 * @param value The value of the string
 */
string new_string(const char *value);

/**
 * Returns a string that contains the concatenation of two or more strings.
 * @param dest The destination of concat
 * @param src The strings to append to the end of the string.
 */
string concat(string *string, const char *src);

/**
 * Replaces text in a string, using a regular expression or search string.
 * @param string Current object
 * @param search_value A string to search for.
 * @param replace_value A string containing the text to replace for every
 * successful match of searchValue in this string.
 */
void replace(string *string, const char *search_value,
             const char *replace_value);

/**
 * Matches a string that supports being matched against, and
 * returns an array
 * containing the results of that search, or null if no matches are found.
 * @param matcher A string that supports being matched against.
 */
bool match(const string string, const char *regex);

/**
 * Returns the position of the first occurrence of a substring.
 * @param search_string The substring to search for in the string
 * @param position The index at which to begin searching the String.
 * If omitted, search starts at the beginning of the string.
 */
int index_of(const char *search_string, int position);

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

#endif /* !STRINGIFY_FUNCTION_H_ */

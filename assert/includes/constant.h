/*
** EPITECH PROJECT, 2020
** clibrary [WSL: Debian]
** File description:
** constant
*/

#ifndef ASSERT_CONSTANT_H_
#define ASSERT_CONSTANT_H_

#define FAIL_EXEC "Unable to continue Executable:"
#define FAIL_FUNC_EXEC "Unable to continue Function:"
#define ERR_ALC84 "ALC84:"
#define ERR_TYPE "TypeError:"
#define DESC_ERR_STRLEN_UNDEFINED "Cannot read property 'strlen' of undefined"
#define DESC_ERR_STRCMP_S1_UNDEFINED "Cannot read property 's1' of undefined"
#define DESC_ERR_STRCMP_S2_UNDEFINED "Cannot read property 's2' of undefined"
#define DESC_ERR_STRCAT_SRC_UNDEFINED "Cannot read property 'src' of undefined"
#define DESC_ERR_CONCAT_UNDEFINED DESC_ERR_STRCAT_SRC_UNDEFINED
#define DESC_ERR_MATCH_UNDEFINED "Cannot read property 'regex' of undefined"
#define DESC_ERR_ALLOC_FAILED "Allocation memory failed."

#define DESC_WARN_NEW_STRING_UNDEFINED \
                                "Create string with property 'value' undefined"
#define DESC_WARN_SEARCH_VALUE_UNDEFINED \
        "Cannot read property 'search_value' of undefined. Replacing aborded."
#define DESC_WARN_REPLACE_VALUE_UNDEFINED \
        "Cannot read property 'replace_value' of undefined. Replacing aborded."

#define RED "\033[1;91m"
#define RES "\033[0m"
#define GREY "\033[1;90m"
#define CYAN "\033[0;96m"
#define YELLOW "\033[0;93m"
#define GREY_WHITE "\033[0;100m"

#endif /* !ASSERT_CONSTANT_H_ */
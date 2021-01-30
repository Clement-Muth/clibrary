/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** macro
*/

#ifndef MACRO_H_
#define MACRO_H_

/**
 * we need a comma at the start for ##_VA_ARGS__ to consume then
 * the arguments are pushed out in such a way that 'cnt' ends up with
 * the right count.
*/
#define _N__ARG(...) _N__ARGS(, ##__VA_ARGS__, 6, 5, 4, 3, 2, 1, 0)
#define _N__ARGS(z, a, b, c, d, e, f, cnt, ...) cnt

#define _LAMBDA(return_type, function_body) \
    ({ return_type __fn__ function_body __fn__; })

#define GET(body, ...) ({                                           \
    int (*action)(int n_arg, ...) =                                 \
        _LAMBDA(int, (int n_arg __attribute__((unused)), ...)body); \
    action(_N__ARG(##__VA_ARGS__), ##__VA_ARGS__);                  \
})

#define unused(x) (void)(x)

#define PROTO_DATA (struct global_info_s){.file = __FILE__, .line = __LINE__, \
    .time = __TIME__ , .func = __func__}

#define ASSERT_INFO(desc, type, nbr) (struct assert_info_s){desc, \
type, nbr}

#define typename(x) _Generic((x),        /* Get the name of a type */          \
                                                                               \
        _Bool: "_Bool",                  unsigned char: "unsigned char",       \
         char: "char",                     signed char: "signed char",         \
    short int: "short int",         unsigned short int: "unsigned short int",  \
          int: "int",                     unsigned int: "unsigned int",        \
     long int: "long int",           unsigned long int: "unsigned long int",   \
long long int: "long long int",                                                \
unsigned long long int: "unsigned long long int",\
        float: "float",                         double: "double",              \
  long double: "long double",                   char *: "pointer to char",     \
       void *: "pointer to void",                int *: "pointer to int",      \
      default: "other")

#endif /* !MACRO_H_ */

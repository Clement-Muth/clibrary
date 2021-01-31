<h1 align="center"><strong>⚠️ This is work in progress. ⚠️</strong></h1>

# Goal of clibrary
The goal of clibrary is to create/simulate an environment of programming oriented object in C and provides many feature from c++ and Javascript.
The idea is to substitute the use of native types like `char *` by autonomous object.
Clibrary also provides an efficient debugger to reduce debugging sessions...

⚠️ This library contains many not standard features ⚠️

# Sommaire

- [Characteristics of clibrary](https://github.com/Clement-Muth/clibrary#characteristics-of-clibrary)
- [Debugger](https://github.com/Clement-Muth/clibrary#debugger)
    - [Try and Catch](https://github.com/Clement-Muth/clibrary#try-and-catch)
    - [Display - my_assert / my_warning_assert](https://github.com/Clement-Muth/clibrary#display---my_assert--my_warning_assert)

# Characteristics of clibrary

- Programming oriented object
- Provide all basics types as object

    |   Type       |      Functions                 |
    |--------------|:------------------------------:|
    | String       | new_string, string_destroy, at, clear, size, compare, copy, empty, insert, to_int, append, assign, find, print| $1600 |
    | Number       |    ...                         |
    | Array string |    ...                         |
    | Array number |    ...                         |
    
- Provide many features from **c++** and **javascript**

# Debugger

The first main part of clibrary is the debugger. It provides some functions and informations for your programs

### Try and Catch

Exception are a very powerful way to program error safe programs. Exceptions let you write straight code without testing for errors at each statement. You can meet this type d'instruction in programming language like **c++**, **java** or **c#**

```c++
...
try
{
   ...
   /* error prone statements */
   ...
}
catch(SomeExceptionType e)
{
   ...
   /* do something intelligent here*/
   ...
}
...
```
There is no try catch statement in C but there are some ways to reproduce their effects.
The solution here is not a fully functional try-throw-catch system. It does not forward exceptions from one block to one more external if no handler is provided.
Real exception mechanisms need run-time support. To do that, we'll explore the potentiality of ***longjmp*** and ***setjmp*** function with a non trivial example.

***longjmp*** and ***setjmp*** are defined in ***setjmp.h*** header file...
```c
#include <setjmp.h>
```
***setjmp*** take a ***jmp_buf*** type variable as only input. It returns `0` when invoked directly and when ***longjmp*** is invoked with the same ***jmp_buf*** variable. It returns the value passed as second argument of ***longjmp***.

Example of basic try-throw-catch:

```c
#include <stdio.h>
#include <setjmp.h>

#define TRY do{ jmp_buf ex_buf__; switch( setjmp(ex_buf__) ){ case 0:
#define CATCH(x) break; case x:
#define ETRY } }while(0)
#define THROW(x) longjmp(ex_buf__, x)

#define EXCEPTION (1)

int main(int argc, char** argv)
{
    TRY {
      printf("In Try Statement\n");
      THROW(BAR_EXCEPTION);
      printf("I do not appear\n");
   } CATCH(EXCEPTION) {
      printf("Got Exception!\n");
   } ETRY;
    return (0);
}
```

<h1 align="center"><img src="https://github.com/Clement-Muth/clibrary/blob/master/assets/Capture-20210131015639-924x51.png"></h1>

Then here is a concrete example of the use of the try-throw-catch:

```c
#include "includes/index.h"
#include <string.h>

static jmp_buf ex_buf;

static void assign_c(string_t *this, register char const *restrict s)
{
    if (is_undefined(this->str) || is_undefined(s)) THROW(3);
    string_destroy(this);
    this->str = (char *)s;
    this->length = my_strlen(s);
}

void (assign)(string_t *this, string_t const *restrict str, global_info_t infos)
{
    TRY {
        my_assert(this != NULL, infos, ASSERT_INFO(DESC_ERR_THIS_UNDEFINED,
            ERR_TYPE, FAIL_EXEC), ex_buf);
        my_assert(str != NULL, infos, ASSERT_INFO(DESC_ERR_STR_UNDEFINED,
            ERR_TYPE, FAIL_EXEC), ex_buf);
        assign_c(this, str->str);
    } CATCH(1) {
        return;
    } CATCH(3) {
        my_warning_assert(!is_undefined(this->str), infos, ASSERT_INFO(
            DESC_ERR_STR_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC), ex_buf);
        my_warning_assert(!is_undefined(str->str), infos, ASSERT_INFO(
            DESC_ERR_STR_UNDEFINED, ERR_TYPE, FAIL_FUNC_EXEC), ex_buf);
    } ETRY;
}
```

`Assign` function from `string` object is used to assign a new value to your object. Some errors could occurred like those above. (`my_assert` and `my_warning_assert` functions are the next points of this part.).

In this example, `assign_c` is a possible cancellation point, therefore there is a THROW inside which throw exception 3 if `this->str` or `s` are undefined.

In this case, `CATCH(3)` is called and a jump is made from the call throw to the catch in question.

### Display - my_assert / my_warning_assert

In this part, we are talking about the error display.
As you saw before, my_assert and warning_assert are used to process the error. 4 arguments must be provided:
- Assertion => expression to evaluate
- Infos => structure contains all information about the error: `__LINE__` `__FILE__` and so on...
- ASSERT_INFO container all information about the type of error
- ex_buf variable to catch throw

<h1 align="center"><img src="https://github.com/Clement-Muth/clibrary/blob/master/assets/Capture-20210131022049-925x195.png"></h1>

- `my_warning_assert` function display a warning with the type of error. The function process is aborted but the program continues.
- `my_assert` function display an error with the type of error. The function is aborted and the program `exit(84)`

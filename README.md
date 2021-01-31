<h1 align="center"><strong>⚠️ This is work in progress. ⚠️</strong></h1>

# Goal of clibrary
The goal of clibrary is to create/simulate an environment of programming oriented object in C and provides many feature from c++ nor Javascript.
The idea is to substitute the use of native types like `char *` by autonomous object.
Clibrary also provides an efficient debugger to reduce debugging sessions...

# Characteristics of clibrary

- Programming oriented object
- Provide all basics types as object

    |   Type       |      Functions                 |
    |--------------|:------------------------------:|
    | String       | new_string, string_destroy, at, clear, size, compare, copy, empty, insert, to_int, append, assign, find, print| $1600 |
    | Number       |    ...                         |
    | Array string |    ...                         |
    | Array number |    ...                         |
    
- Provide many features from **c++** nor **javascript**

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

***longjmp*** and ***setjmp*** are defined in *setjmp.h* header file...
```c
#include <setjmp.h>
```
***setjmp*** take a ***jmp_bug*** type variable as only input. It returns `0` when invoked directly and when ***longjmp*** is invoked with the same ***jmp_buf*** variable. It returns the value passed as second argument of ***longjmp***.

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

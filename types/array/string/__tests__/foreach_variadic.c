#define _LAMBDA(return_type, function_body)\
    ({ return_type __fn__ function_body __fn__; })

#define _FOREACHNFA(item, arr, arr_length, func, ...) ({\
    char **(*action)(char *item, int __VA_ARGS__) = func;\
    for (int i = 0; i < arr_length; i++) action(arr[i], i);\
})

#define _FOREACHNF(item, arr, arr_length, func) ({\
    char **(*action)(char *item) = func;\
    for (int i = 0; i < arr_length; i++) action(arr[i]);\
})

/*
 * we need a comma at the start for ##_VA_ARGS__ to consume then
 * the arguments are pushed out in such a way that 'cnt' ends up with
 * the right count.  
 */
#define _N__ARG(...) _N__ARGS(,##__VA_ARGS__,6,5,4,3,2,1,0)
#define _N__ARGS(z,a,b,c,d,e,f,cnt,...) cnt

/**
 * Performs the specified action for each element in an array.
 * @param item Variable coontaining each cases.
 * @param arr Array to perform action.
 * @param body Action for each element.
 * @param index? Index in the array. 
 */
#define E(item, arr, body, ...) ({\
    ((_N__ARG(__VA_ARGS__)) ?\
    _FOREACHNFA(item, arr, 2, _LAMBDA(char **, (char *item, int __VA_ARGS__) body), __VA_ARGS__) :\
    _FOREACHNF(item, arr, 2, _LAMBDA(char **, (char *item) body)));\
    arr;\
})

/**
 * Returns array after performing.
 * @param e New Array
 */
static inline char **foreach(char **e)
{
    return (e);
}

int main(void)
{
    char *messages[] = {"test", "test2"};

    foreach(E(message, messages, {
        printf("%s\n", message);
    }));

    return 0;
}
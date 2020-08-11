/*
** EPITECH PROJECT, 2020
** library [WSL: Debian]
** File description:
** macro
*/

#ifndef MACRO_H_
#define MACRO_H_

/*
 * we need a comma at the start for ##_VA_ARGS__ to consume then
 * the arguments are pushed out in such a way that 'cnt' ends up with
 * the right count.  
 */
#define _N__ARG(...) _N__ARGS(,##__VA_ARGS__,6,5,4,3,2,1,0)
#define _N__ARGS(z,a,b,c,d,e,f,cnt,...) cnt

#define GET(body, ...) ({\
    int (*action)(int n_arg, ...) = _LAMBDA(int, (int n_arg, ...) body);\
    action(_N__ARG(##__VA_ARGS__), ##__VA_ARGS__);\
})

#endif /* !MACRO_H_ */

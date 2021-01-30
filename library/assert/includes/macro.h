/*
** EPITECH PROJECT, 2021
** clibrary
** File description:
** macro
*/

#pragma once

#define TRY do{ jmp_buf ex_buf; switch( setjmp(ex_buf) ){ case 0:
#define CATCH(x) break; case x:
#define ETRY } }while(0)
#define THROW(x) longjmp(ex_buf, x)
#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024


/**
 * struct fmt - Struct op
 *
 * @fmt: The format.
 * @fn: The function associated.
 */
int printf_str(char *);
int _putchar(char c);
int printf_digit_d(int);
int printf_digit_i(int);
int _printf(const char *format, ...);


#endif /* MAIN_H */

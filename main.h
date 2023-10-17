#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define BUFF_SIZE 1024

typedef struct format
{
	char *id;
	int (*f)();

}match;
int printf_char(va_list val);
int _putchar(char c);
int printf_bin(va_list val);
int _printf(const char *format, ...);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);


#endif

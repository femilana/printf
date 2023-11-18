#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct frame - a struct that convert for printf
 * @ptr: pointer to the specifier
 * @fun: a function to the conversion specifier
 */

typedef struct format
{
	char *ptr;
	int (*fun) ();
} modify;


int print_s_string(va_list val);
int _putchar(char c);
int printf_char(va_list val);
int _printf(const char *format, ...);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_percentage(void);
int print_dec(va_list args);
int print_int(va_list args);
int print_binary(va_list val);
int printf_unsigned(va_list args);
int printf_oct(va_list val);
int printf_hex(va_list val);
int printf_hex_extra(unsigned long int num);
int printf_pointer(va_list val);
int print_h_hex(va_list val);
int print_HEXX_extra(unsigned int num);
int printf_revs(va_list args);
int printf_rot13(va_list args);

#endif

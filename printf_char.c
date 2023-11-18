#include "main.h"
#include <stdarg.h>

/**
 * printf_char - a function that prints out a char
 * @val: parameter passed into the function
 * Return: 0
 */

int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (0);
}

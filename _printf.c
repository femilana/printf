#include "main.h"
/**
 * _printf - a function that mimickd C program printf function
 * @format: parameter
 * Return: length of the string.
 */

int _printf(const char * const format, ...)
{
	modify p[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", print_percentage},
		{"%i", print_int}, {"%d", print_dec}, {"%r", printf_revs},
		{"%R", printf_rot13}, {"%b", print_binary},
		{"%u", printf_unsigned},
		{"%o", printf_oct}, {"%x", printf_hex}, {"%X", print_HEXX_extra},
		{"%S", print_s_string}, {"%p", printf_pointer}
	};

	va_list args;
	int i = 0;
	int j;
	int length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Now:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ptr[0] == format[i] && p[j].ptr[1] == format[i + 1])
			{
				length += p[j].fun(args);
				i = i + 2;
				goto Now;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}

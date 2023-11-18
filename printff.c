#include "main.h"

/**
 * _printf - a function that replicate printf
 * @format: identifier
 * Return: int
 */

int _pprintf(const char *format, ...)
{
	modify m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_percentage}, {"%d", print_dec}, {"%i", print_int}, {"%r", printf_revs}, {"%R", printf_rot13}, {"%b", print_binary}, {"%u", printf_unsigned}, {"%o", printf_oct}, {"%x", printf_hex}, {"%X", print_HEXX_extra}, {"%S", print_s_string}, {"%p", printf_pointer}
	};

	va_list args;
	int i = 0;
	int len = 0;
	int check;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		check = 13;
		while (check >= 0)
		{
			if (m[check].ptr[0] == format[i] && m[check].ptr[1] == format[i + 1])
			{
				len = len + m[check].fun(args);
				i = i + 2;
				goto Here;
			}
			check--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}

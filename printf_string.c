#include "main.h"
#include <stdarg.h>

/**
 * printf_string - a function that prints out a sring
 * @val: parameter taken
 * Return: lenght
 */

int printf_string(va_list val)
{
	char *str;
	int num, lenght;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		lenght = _strlen(str);

		for (num = 0; num < lenght; num++)
			_putchar(str[num]);
		return (lenght);
	}

	else
	{
		lenght = _strlen(str);
		for (num = 0; num < lenght; num++)
			_putchar(str[num]);
		return (lenght);
	}
}

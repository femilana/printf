#include "main.h"

/**
 * print_s_string - a function that  prints exclusuives string.
 * @val: parameter.
 * Return: integer.
 */

int print_s_string(va_list val)
{
	char *d;
	int a, length = 0;
	int value;

	d = va_arg(val, char *);
	if (d == NULL)
		d = "(null)";
	for (a = 0; d[a] != '\0'; a++)
	{
		if (d[a] < 32 || d[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = d[a];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEXX_extra(value);
		}
		else
		{
			_putchar(d[a]);
			length++;
		}
	}
	return (length);
}

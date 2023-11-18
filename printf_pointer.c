#include "main.h"

/**
 * printf_pointer -a function that prints an hexadecimal number.
 * @val: parameter
 * Return: count
 */

int printf_pointer(va_list val)
{
	void *ptp;
	char *pts = "(nil)";
	long int x;
	int y;
	int a;

	ptp = va_arg(val, void*);
	if (ptp == NULL)
	{
		for (a = 0; pts[a] != '\0'; a++)
		{
			_putchar(pts[a]);
		}
		return (a);
	}

	x = (unsigned long int)ptp;
	_putchar('0');
	_putchar('x');
	y = printf_hex_extra(x);
	return (y + 2);
}

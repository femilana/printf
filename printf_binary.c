#include "main.h"

/**
 * print_binary - a function that converts to binary
 * @val: parameter
 * Return: cont
 */

int print_binary(va_list val)
{
	int i, c, a = 1, cont = 0, flag = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int b;

	for (i = 0; i < 32; i++)
	{
		b = ((a << (32 - i)) & num);
		if (b >> (31 - i))
			flag = 1;
		if (flag)
		{
			c = b >> (31 - i);
			_putchar(c + 48);
			cont++;
		}

	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}

	return (cont);
}

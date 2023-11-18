#include "main.h"

/**
 * printf_unsigned - a function that prints an unsigned integer
 * @args: parameter to print
 * Return: integer (i)
 */

int printf_unsigned(va_list args)
{
	unsigned int num1 = va_arg(args, unsigned int);
	int num2, last = num1 % 10, digit, exp = 1;
	int  i = 1;

	num1 = num1 / 10;
	num2 = num1;

	if (last < 0)
	{
		_putchar('-');
		num2 = -num2;
		num1 = -num1;
		last = -last;
		i++;
	}
	if (num2 > 0)
	{
		while (num2 / 10 != 0)
		{
			exp = exp * 10;
			num2 = num2 / 10;
		}
		num2 = num1;
		while (exp > 0)
		{
			digit = num2 / exp;
			_putchar(digit + '0');
			num2 = num2 - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

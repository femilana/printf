#include "main.h"

/**
 * print_int- a function that printd out an interger
 * @args: the parameter inputted
 * Return: number to be printed
 */

int print_int(va_list args)
{
	int num1 = va_arg(args, int);
	int num2, last = num1 % 10, num3, exp = 1;
	int i = 1;

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
			num3 = num2 / exp;
			_putchar(num3 + '0');
			num2 = num2 - (num3 * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}


#include "main.h"

/**
 * print_dec- a function that printd out an interger
 * @args: the parameter inputted
 * Return: number to be printed
 */

int print_dec(va_list args)
{
	int num1 = va_arg(args, int);
	int num2, last = num1 % 10, num3, exp = 1;
	int i = 1;

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
			num3 = num2 / exp;
			_putchar(num3 + '0');
			num2 = num2 - (num3 * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

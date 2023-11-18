#include "main.h"

/**
 * printf_oct - a function that prints an octal number.
 * @val: parameter
 * Return: counter.
 */

int printf_oct(va_list val)
{
	int *array;
	int a;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (a = 0; a < count; a++)
	{
		array[a] = tem % 8;
		tem /= 8;
	}
	for (a = count - 1; a >= 0; a--)
	{
	_putchar(array[a] + '0');
	}
	free(array);
	return (count);
}

#include "main.h"

/**
 * print_h_hex - a function that prints an hexadecimal number.
 * @val: arguments.
 * Return: count
 */

int print_h_hex(va_list val)
{
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	int a;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (a = 0; a < count; a++)
	{
		array[a] = tem % 16;
		tem /= 16;
	}
	for (a = count - 1; a >= 0; a--)
	{
		if (array[a] > 9)
			array[a] = array[a] + 7;
		_putchar(array[a] + '0');
	}
	free(array);
	return (count);
}

#include "main.h"

/**
 * print_HEXX_extra - a function that prints an hexadecimal number.
 * @num: number to print.
 * Return: count
 */

int print_HEXX_extra(unsigned int num)
{
	int *array;
	int count = 0;
	unsigned int tem = num;
	int a;

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

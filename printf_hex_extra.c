#include "main.h"

/**
 * printf_hex_extra - a function that prints an hexdecimal number.
 * @num: parameter
 * Return: count
 */

int printf_hex_extra(unsigned long int num)
{

	long int count = 0;
	long int *array;
	long int a;
	unsigned long int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(long int));

	for (a = 0; a < count; a++)
	{
		array[a] = tem % 16;
		tem = tem / 16;
	}
	for (a = count - 1; a >= 0; a++)
	{
		if (array[a] > 9)
			array[a] = array[a] + 39;
		_putchar(array[a] + '0');
	}
	free(array);
	return (count);
}

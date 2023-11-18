#include "main.h"

/**
 * printf_hex - a function that prints an hexdecimal number.
 * @val: parameter
 * Return: count.
 */

int printf_hex(va_list val)
{
	int count = 0;
	int a;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
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
			array[a] = array[a] + 39;
		_putchar(array[a] + '0');
	}
	free(array);
	return (count);
}

#include "main.h"

/**
 * printf_rot13 - a function that convert to rot13
 * @args: parameter
 * Return: count
 */

int printf_rot13(va_list args)
{
	int j;
	int count = 0;
	int a;
	int k = 0;
	char *s = va_arg(args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a]; a++)
	{
		k = 0;
		for (j = 0; al[j] && !k; j++)
		{
			if (s[a] == al[j])
			{
				_putchar(bl[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[a]);
			count++;
		}
	}
	return (count);
}

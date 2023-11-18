#include "main.h"

/**
 * printf_revs - a function that prints a str in reverse
 * @args:parameter
 * Return: the string
 */

int printf_revs(va_list args)
{

	char *s = va_arg(args, char*);
	int b = 0;
	int a;

	if (s == NULL)
		s = "(null)";
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(s[a]);
	return (b);
}

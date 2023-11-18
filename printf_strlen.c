#include "main.h"

/**
 * _strlen - a function that prints out the lenght of a string.
 * @str: pointer to the string
 * Return: num
 */

int _strlen(char *str)
{
	int num;

	for (num = 0; str[num] != 0; num++)
		;
	return (num);
}

/**
 * _strlenc - a function that prints out the lenght of
 * a string for a constant char pointer
 * @str: pointer to a string
 * Return: num
 */

int _strlenc(const char *str)
{
	int num;

	for (num = 0; str[num] != 0; num++)
		;
	return (num);
}

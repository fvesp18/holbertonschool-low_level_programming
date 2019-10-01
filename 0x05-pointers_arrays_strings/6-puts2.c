#include "holberton.h"

/**
 * puts2 - print every other char in string
 * @str: location of string
 * Return: void
 */

void puts2(char *str)
{
	int dig;

	for (dig = 0; dig <= 8; dig += 2)
	{
	_putchar(str[dig]);
	}
	_putchar('\n');
}

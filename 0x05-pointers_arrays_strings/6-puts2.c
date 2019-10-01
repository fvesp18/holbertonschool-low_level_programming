#include "holberton.h"

/**
 * puts2 - print every other char in string
 * @str: location of string
 * Return: void
 */

void puts2(char *str)
{
	int dig = 0;

	while (str[dig] != '\0')
	{
		if (dig % 2 == 0)
	{
		_putchar(str[dig]);
	}
		dig++;
	}
	_putchar('\n');
}

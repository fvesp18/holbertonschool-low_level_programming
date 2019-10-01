#include "holberton.h"

/**
 * print_rev - will print the string *s in reverse
 * @s: location of string
 * Return: void
 */

void print_rev(char *s)
{

	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	while (count != 0)
	{
		count--;
		_putchar(s[count]);
	}

	_putchar('\n');
}

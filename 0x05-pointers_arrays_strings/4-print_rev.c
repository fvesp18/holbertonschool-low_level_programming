#include "holberton.h"

/**
 * _puts - will print the string *str
 * @str: location of str
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

#include "holberton.h"

/**
 * _puts - will print the string *str
 * @str: location of str
 * Return: void
 */

void _puts(char *str)
{

	int begin;

	while (str[begin] != '\0')
	{

		_putchar(str[begin]);
		begin++;

	}

	_putchar('\n');

}

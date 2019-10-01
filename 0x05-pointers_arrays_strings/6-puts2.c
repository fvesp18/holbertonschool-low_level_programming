#include "holberton.h"

/**
 * puts2 - print every other char in string
 * @str: location of string
 * Return: void
 */

void puts2(char *str)
{
	_putchar(*(str + 0));
	_putchar(*(str + 2));
	_putchar(*(str + 4));
	_putchar(*(str + 6));
	_putchar(*(str + 8));
	_putchar('\n');

}

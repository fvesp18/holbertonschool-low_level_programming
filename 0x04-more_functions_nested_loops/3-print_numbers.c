#include "holberton.h"

/**
 * print_numbers - point of entry
 *
 * Return: void
 */

void print_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * print_numbers - point of entry
 *
 * Return: 0
 */

void print_numbers(void)
{
	char ch;

	for (ch = 49; ch <= 57; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

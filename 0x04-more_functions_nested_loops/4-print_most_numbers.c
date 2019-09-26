#include "holberton.h"

/**
 * print_most_numbers - point of entry
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		if (number != 50 && number != 52)
		{
			_putchar(number);
		}
	}
	_putchar('\n');
}

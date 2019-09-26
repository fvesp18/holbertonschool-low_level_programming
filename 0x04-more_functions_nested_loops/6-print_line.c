#include "holberton.h"

/**
 * print_line - point of entry
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	}
	if (n > 0)
	{
		while (n > 0)
		{
		_putchar(95);
		n--;
		}
	}
	if (n == 0)
	{
		_putchar('\n');
	}
}

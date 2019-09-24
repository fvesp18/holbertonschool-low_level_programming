#include "holberton.h"

/**
 * print_last_digit - point of entry
 * @n: parameter
 * Return: 0
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar('0' + last);
	return (last);
}

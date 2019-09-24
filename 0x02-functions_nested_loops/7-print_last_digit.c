#include "holberton.h"

/**
 * print_last_digit - point of entry
 * @n: parameter
 * Return: 0
 */

int print_last_digit(int n)
{
	int last = n % 10;

	_putchar(last);
	return (0);
}

#include "holberton.h"

/**
 * print_triangle - point of entry
 * @size: parameter
 * Return: 0
 */

void print_triangle(int size)
{
	int loop;
	int space;
	int hash;

	for (loop = 1; loop <= size; loop++)
	{
		for (space = size; space > loop; space--)
		{
			_putchar(' ');
		}
		for (hash = 1; hash <= loop; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

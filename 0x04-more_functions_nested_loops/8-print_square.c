#include "holberton.h"

/**
 * print_square - point of entry
 * @size: parameter
 * Return: void
 */

void print_square(int size)
{
	int loop;
	int grid;

	if (size < 0)
	{
		_putchar(10);
	}

	if (size == 0)
	{
		_putchar(10);
	}

	for (grid = 1; grid <= size; grid++)
	{
		for (loop = 1; loop <= size ; loop++)
		{
			_putchar(35);
		}
		_putchar(10);
	}

}

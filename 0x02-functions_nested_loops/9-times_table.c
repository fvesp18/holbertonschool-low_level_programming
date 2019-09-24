#include "holberton.h"

/**
 * times_table - main entry
 * Return: 0
 */

void times_table(void)
{
	int loop;
	int column;
	int first = 0;
	int prod = first * column;

	for (column = 0; column <= 9; column++)
	{
		for (loop = 0; loop <= 9; loop++)
		{
			_putchar(first + '0');
			if (loop != 9)
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			if (loop == 9)
			_putchar('\n');
			if (loop > 9)
				_putchar(prod);
		}
	}
}

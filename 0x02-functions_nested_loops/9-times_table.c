#include "holberton.h"

/**
 * times_table - main entry
 * Return: 0
 */

void times_table(void)
{
	int row;
	int column;
	int prod;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			prod = column * row;
			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			if (column != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

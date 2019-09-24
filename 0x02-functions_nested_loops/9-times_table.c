#include "holberton.h"

/**
 * times_table - main entry
 * Return: 0
 */

void times_tables(int *)
{
	int loop;
	int mult;
	int first = 0;
	int second = 9;
	int product = first * second;

	for (loop = 0; loop <= 9; loop++)
	{
		while (first == 0)
		{
		_putchar(first + '0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
		}
		first++;
		for (mult = 0; mult <= 9; mult++)
		{
			_putchar(product + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
}

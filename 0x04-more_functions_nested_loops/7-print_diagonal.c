#include "holberton.h"

/**
 * print_diagonal - point of entry
 * @n: parameter
 */

void print_diagonal(int n)
{
	int spa;
	int dia;

	if (n > 0)
	{
		for (spa = 1; spa <= n; spa++)
		{
			for (dia = 1; dia < spa; dia++)
			{
				if (spa != 0)
				{
					_putchar(32);
				}
			}
				if (dia == spa)
				{
					_putchar(92);
					_putchar(10);
				}
		}
	}

	else
	{
		_putchar(10);
	}
}

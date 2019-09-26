#include "holberton.h"

/**
 * more_numbers - point of entry
 * Return: void
 */

void more_numbers(void)
{
	int loop;
	int numbers;

	for (loop = 0; loop <= 9; loop++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers > 9)
			{
				_putchar((numbers / 10) + '0');
			}
				_putchar((numbers % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 * print_alphabet_x10 - beginning of function
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int loop;
	int alphabet;

	for (loop = 0; loop <= 9; loop++)
	{
		for (alphabet = 97; alphabet <= 122; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

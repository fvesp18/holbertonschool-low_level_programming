#include "holberton.h"
/**
 * clear_bit - clears bit at index
 * @n: integer to be processed
 * @index: index of bit
 * Return: some int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (*n)
		return (1);
	if (index)
		return (index);

	return (0);
}

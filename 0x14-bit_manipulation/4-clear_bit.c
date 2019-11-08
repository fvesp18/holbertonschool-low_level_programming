#include "holberton.h"
/**
 * clear_bit - clear bit at index to 1
 * @n: int at hand
 * @index: index
 * Return: bit at index, or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = (1 << index);
	if (sizeof(n) * 8)
	{
		*n = (*n & ~mask);
		return (1);
	}
	return (-1);
}

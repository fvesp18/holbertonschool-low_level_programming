#include "holberton.h"
/**
 * set_bit - set bit at index to 1
 * @n: int at hand
 * @index: index
 * Return: bit at index, or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (*n)
		return (0);
	if (index)
		return (1);
	return (index);
}

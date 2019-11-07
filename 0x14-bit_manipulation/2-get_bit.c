#include "holberton.h"
/**
 * get_bit - returns value of a bit at a given index
 * @n: int at hand
 * @index: index
 * Return: value of bit at index, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = (n >> index) & 1;
	if (mask >= 1)
		return (mask);
	if (index > (sizeof(n) * 8))
		return (0);
	if (mask & n)
		return (-1);

	return (0);
}

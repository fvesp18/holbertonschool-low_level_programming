#include "holberton.h"
/**
 * flip_bits - does the flip thing
 * @n: integer to be converted
 * @m: integert to be converted
 * Return: some unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int mask = 0;
	int index;

	index = n ^ m;
	while (index > 0)
	{
		if (index & 1)
		{
			mask++;
		}
		index >>= 1;
	}
	return (mask);
}

#include "holberton.h"
/**
 * binary_to_uint - converts to binary
 * @b: binary string
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv = 0;
	int i = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
			conv = (conv << 1) | 1;
		else if (b[i] == '0')
			conv = (conv << 1);
		else
			return (0);
	}
	return (conv);
}

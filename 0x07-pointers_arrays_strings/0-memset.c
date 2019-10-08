#include "holberton.h"

/**
 * _memset - set size alotment for s
 * @s: string location
 * @b: byte size
 * @n: location of change
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		s[cnt] = b;
	}

	return (s);
}

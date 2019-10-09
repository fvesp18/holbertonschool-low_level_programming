#include "holberton.h"

/**
 * _strspn - get length of prefix substring
 * @s: main string
 * @accpt: substring
 * Return: none
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int i;
	unsigned int ii;
	unsigned int hold;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (ii = 0; accept[ii] != '\0'; ii++)
		{
			if (accept[ii] == s[i])
				hold = hold + 1;

		}

	}
	return (hold - 2);
}

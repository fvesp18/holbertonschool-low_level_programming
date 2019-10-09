#include "holberton.h"

/**
 * _strspn - get length of prefix substring
 * @s: main string
 * @accpt: substring
 * Return: none
 */

unsigned int _strspn(char *s, char *accept)
{
	int ii = 0;
	unsigned hold;

	for (; *s != '\0'; s++)
	{
		ii = 0;

		for (; accept[ii] != '\0'; ii++)
		{
			if (accept[ii] == *s)
			{
				hold = hold + 1;
				break;
			}
		}
		if (accept[ii] == '\0')
			break;

	}
	return (hold);
}

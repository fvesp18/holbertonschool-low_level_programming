#include "holberton.h"

char *_strpbrk(char *s, char *accept)
{

	int i;
	int ii;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; accept[ii] != '\0'; ii++)
		{

			if (accept[ii] != s[i])
			{

				return (s);

			}
			if (s[i] == 0)
				break;
		}

	}
	return (0);
}

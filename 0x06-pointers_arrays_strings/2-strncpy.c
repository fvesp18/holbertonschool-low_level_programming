# include "holberton.h"

/**
 * _strncpy - copy string src to string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	while (src[n] != '\0')
	{
		++n;
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}

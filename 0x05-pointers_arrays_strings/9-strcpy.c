#include "holberton.h"

/**
 * _strcpy - program that copies src to buffer dest
 * @dest: buffer
 * @src: location of string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int f = i + 2;

	if ((src[i] != '\0') && (dest[f] != '\0'))
	{
		while (src[i] != '\0')
		{
			*dest++ = *src++;
		}
		*dest = '\0';
	}
	return (dest);
}

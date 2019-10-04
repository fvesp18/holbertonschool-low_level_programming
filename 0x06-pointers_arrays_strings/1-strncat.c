#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: non null termination
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	char *out = dest;

	while (*dest)
	{
		dest++;
	}
	while (n-- && *src != '\0')
	{
		*dest++ = *src++;
	}
	return (out);
}

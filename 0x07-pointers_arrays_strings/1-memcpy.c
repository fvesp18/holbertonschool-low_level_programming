 #include "holberton.h"

/**
 * _memcpy - copies str src to str dest
 * @src: source string
 * @dest: destination for copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int sind;

	for (sind = 0; sind < n; sind++)
	{

		dest[0 +  sind] = src[0 + sind];

	}
	return (dest);
}

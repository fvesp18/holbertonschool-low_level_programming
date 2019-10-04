# include "holberton.h"

/**
 * _strncpy - copy string src to string dest
 * @dest: destination string
 * @src: source string
 * @fir: buffer
 * @n: pointer location
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int fir;

	for (fir = 0; fir < n && src[fir] != '\0'; fir++)
	{
		dest[fir] = src[fir];
	}
	for (; fir < n; fir++)
		dest[fir] = '\0';

	return (dest);
}

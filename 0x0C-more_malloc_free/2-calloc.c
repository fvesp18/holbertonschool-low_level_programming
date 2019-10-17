#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


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

/**
 * _calloc - allocates memory for an array
 * @nmemb: a parameter
 * @size: size of allocation
 * Return: NULL, upon failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int arr;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = nmemb * size;

	if (size != arr / nmemb)
		return (NULL);

	ptr = malloc(arr);
	if (!ptr)
		return (NULL);

	_memset(ptr, 0, arr);

	return ((void *)_memset(ptr, 0, arr));
}

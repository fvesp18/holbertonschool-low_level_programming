#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size
 * Return: NULL, if fail
 */

void *malloc_checked(unsigned int b)
{

	unsigned int *buffer;

	buffer = malloc(b);
	if (buffer == NULL)
	{
		exit(98);
	}

	return (buffer);
}

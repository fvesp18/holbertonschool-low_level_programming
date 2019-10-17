#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates memory and free
 * @ptr: pointer
 * @old_size: old malloc
 * @new_size: new malloc, reallocation
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *rere;

	if (!ptr)
		return (NULL);

	if (old_size < new_size)
		return (NULL);

	rere = malloc(sizeof(unsigned int) * new_size);

	return (rere);
}

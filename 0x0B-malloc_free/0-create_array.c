#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initiliazes at certain point
 * @size: size
 * @c: point of initiation
 * Return: 0, if size = 0 or array, pointer if NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int count;
	char *some_a;

	if (size == 0)
	{
		return (NULL);
	}
	some_a = malloc(size * sizeof(unsigned int));

	if (some_a == NULL)
	{
		return (NULL);
	}

	count = 0;
	while (count < size)
	{
		some_a[count] = c;
		count++;
	}

	some_a[count] = '\0';
	return (some_a);
}

#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - allocates memory for a duplication
 * @str: string being duplicated
 * Return: pointer
 */

char *_strdup(char *str)
{

	int count, size;
	char *dup;

	/* checks for empty string */
	if (str == NULL)
		return (NULL);

	/* finds str length */
	for (size = 0; str[size] != '\0'; size++);
	{
		;
	}
	size++;

	/* allocates memory for string duplicate */
	dup = malloc(sizeof(char) * size);

	/* malloc fail safe */
	if (dup == NULL)
		return (NULL);

	/* loop through string and copy */
	for (count = 0; count < size; count++)
		dup[count] = str[count];

	return (dup);
}

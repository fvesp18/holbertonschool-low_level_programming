#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	/* declare your variables */
	int len, count;
	char *cat;

	/* check for empty strings & gets length */
	if (s1 != NULL)
		for (count = 0; s1[count] != '\0'; count++)
			len++;
	if (s2 != NULL)
		for (count = 0; s2[count] != '\0'; count++)
			len++;
	/* account for null at end */
	len++;
	/* allocate memory for concatenated string */
	cat = malloc(sizeof(char) * len);
	/* malloc fail safe */
	if (cat == NULL)
		return (NULL);
	/* duplicate s1 to cat */
	if (s1 != '\0')
		for (count = 0, len = 0; s1[count] != '\0'; count++, len++)
			cat[len] = s1[count];
	/* add s2 to end of s1 to cat */
	if (s2 != '\0')
		for (count = 0, len = 0; s2[count] != '\0'; count++, len++)
			cat[len] = s2[count];
	/* set last block to null byte */
	cat[len] = '\0';
	/* return pointer */
	return (cat);
}

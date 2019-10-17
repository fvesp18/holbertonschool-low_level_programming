#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	/* declare your variables */
	int len1 = 0, len2 = 0, count = 0, begs = 0;
	char *cat;

	/* check for empty strings */
	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	/* find length of strings */
       	for (count = 0; s1[count] != '\0'; count++)
	       	len1++;
	for (count = 0; s2[count] != '\0'; count++)
	       	len2++;

	/* allocate memory for concatenated string */
	cat = malloc((len1 + len2 + 1) * sizeof(char));

	/* malloc fail safe */
	if (cat == NULL)
		return (NULL);

	/* duplicate s1 to cat */
	/* if (s1 != '\0') */
       	for (count = 0; count < len1; count++)
	       	cat[count] = s1[count];

	/* add s2 to end of s1 to cat */
	/* if (s2 != '\0') */
       	for (begs = 0; begs < len2; begs++, count++)
       		cat[count] = s2[begs];

	/* set last block to null byte */
	cat[count] = '\0';

	/* return pointer */
	return (cat);
}

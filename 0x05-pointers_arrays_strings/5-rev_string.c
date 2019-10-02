#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: location of string
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;
	int lind, rind;
	char temp;
	int i;

	while (s[count] != '\0')
	{
		count++;
	}

	lind = s[count];
	rind = count - 1;

	for (i = lind; i < rind; i++)
	{
		temp = s[i];
		s[i] = s[rind];
		s[rind] = temp;
		rind--;
	}
}

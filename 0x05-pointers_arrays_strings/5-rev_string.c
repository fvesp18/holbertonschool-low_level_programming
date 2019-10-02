#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: location of string
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;
	char *first, *last;
	char temp;
	int ch = 0;

	while (s[count] != '\0')
	{
		count++;
      	}
	while (ch < (count--))
	{
		last++;
		ch++;
	}
	while(ch < (count / 2))
	{
		temp = *last;
		*last = *first;
		*first = temp;
		first++;
		last--;

		ch++;
	}
}

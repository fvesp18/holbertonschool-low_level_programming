#include "holberton.h"
#define MAX_SIZE 100

/**
 * cap_string - capitalize every word in string
 * @i: counter
 * @s: string
 * Return: 0
 */

char *cap_string(char *s)
{
	char str[MAX_SIZE];

	while (*s)
	{
		s = str;
	       	*s = (*s >= 'a' && *s <= 'z') ? *s - 32 : *s;
       		s++;
	}

	return (0);
}

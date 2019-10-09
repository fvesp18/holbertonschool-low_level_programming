#include "holberton.h"

/**
 * _strchr - locate characters in string
 * @s: source string
 * @c: character reference
 * Return: s[c], null
 */

char *_strchr(char *s, char c)
{
	int sind;

	for (sind = 0; s[sind] != c; sind++)
	{
		if (!*s++)
		{
			return (0);
     		}
	}
	return (s + 1);
}

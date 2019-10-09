#include "holberton.h"

/**
 * _strchr - locate characters in string
 * @s: source string
 * @c: character reference
 * Return: s[c], null
 */

char *_strchr(char *s, char c)
{
	if (*s == '\0')
	{
		return ('\0');
	}

	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}

       		return ('\0');
}

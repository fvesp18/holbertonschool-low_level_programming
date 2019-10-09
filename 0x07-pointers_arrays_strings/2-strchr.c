#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locate characters in string
 * @s: source string
 * @c: character reference
 * Return: s[c], null
 */

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
		if (*s != c)
			return (0);
		return (0);
}

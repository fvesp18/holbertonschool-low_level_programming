#include "holberton.h"

/**
 * _strcmp - compares strings
 * @s1: string one
 * @s2: string two
 * Return: -15, 15, 0
 */

int _strcmp(char *s1, char *s2)
{

	if (*s1 < *s2)
	{
		return (-15);
	}
	if (*s2 < *s1)
	{
		return (15);
	}
	if (*s1 == *s1)
	{
		return (0);
	}

}

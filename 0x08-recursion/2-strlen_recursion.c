#include "holberton.h"

/**
 * _strlen_recursion - counts chars in str
 * @s: string
 * Return: 0, or count
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}

}

#include "holberton.h"

/**
 * _isupper - point of entry
 * @c: parameter
 * Return: 1 if c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}

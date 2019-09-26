#include "holberton.h"

/**
 * _isdigit - main point of entry
 * @c: digit
 * Return: 1 if c is digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	return (0);
}

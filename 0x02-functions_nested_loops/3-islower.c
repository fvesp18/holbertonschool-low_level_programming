#include "holberton.h"

/**
 * _islower - entry point
 * @c: is a parameter
 * Description: Will return 1 if lower, 0 if upper
 * Return: 1 if lower, else 0
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	return (0);
}

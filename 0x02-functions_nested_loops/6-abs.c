#include "holberton.h"

/**
 * _abs(int) - point of entry
 * @int: parameter
 * Return: 0, +, -
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-(n));
	}
	if (n == 0)
	{
		return (n);
	}
	if (n > 0)
	{
		return (n);
	}
	return (0);
}

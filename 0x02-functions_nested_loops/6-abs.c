#include "holberton.h"

/**
 * _abs - point of entry
 * @n: parameter
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

#include "holberton.h"

/**
 * factorial - finds the factorial of a func
 * @n: integer parameter
 * Return: 0, 1 or n
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);

	}

	return (n * factorial(n - 1));
}

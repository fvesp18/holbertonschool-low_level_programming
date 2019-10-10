#include "holberton.h"

/**
 * is_prime_number - determines if a number is prime or not\
 * @n: number at hand
 * Return: 1, if prime, 0 if not
 */

int is_prime_number(int n)
{
	int div = n;

	if (div == 1)
	{
		return (1);
	}

	else
	{
		if (n % div == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime_number(n));
		}
	}
}

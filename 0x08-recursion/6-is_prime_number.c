#include "holberton.h"

/**
 * helper - helper
 * @n: number
 * @div: divisor
 * Return: prime
 */

int helper(int n, int div)
{
	if (n <= 2)
	{
		return (n == 2);
	}

       	if (n % div ==  0)
       	{
       		return (0);
       	}

	if (div * div > n)
	{
		return (1);
	}
	return (helper(n, div + 1));
}

/**
 * is_prime_number - determines if a number is prime or not\
 * @n: number at hand
 * Return: 1, if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);

       	return (helper(n, 2));
}

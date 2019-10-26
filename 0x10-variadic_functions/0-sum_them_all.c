#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of all parameters
 * @n: constant
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int sum = 0;
	unsigned int str = 0;

	va_start(arguments, n);

	for (; str < n; str++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}

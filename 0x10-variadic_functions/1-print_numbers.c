#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: number of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int arg;
	unsigned int s = 0;
	va_list args;
	va_start (args, n);

	for (s = 0; s < n; s++)
	{
		arg = va_arg (args, int);
		printf("%d", arg);
		va_end (args);
		if (separator != NULL && s < n - 1)
			printf("%s", separator);
	}

	printf("\n");
}

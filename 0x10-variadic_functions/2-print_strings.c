#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: argument counter
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int cnt;
	char *str;
	va_list strings;

	va_start(strings, n);
	for (cnt = 0; cnt < n; cnt++)
	{
		str = va_arg(strings, char *);
		if (str)
		printf("%s", str);
		else
		printf("(nil)");
		if (separator != NULL && cnt < n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}

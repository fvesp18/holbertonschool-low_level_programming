#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int it;
	va_list vars;

	va_start(vars, format);
	while (format[it])
	{
		switch (format[it])
		{
			case 'c':
				printf("%c", va_arg(vars, int));
				break;
			case 'i':
				printf("%i", va_arg(vars, int));
				break;
			case 'f':
				printf("%f", va_arg(vars, double));
				break;
			case 's':
				printf("%s", va_arg(vars, char *));
				break;
			default:
				printf(", ");
				break;
		}
	it++;
	}
	va_end(vars);
	printf("\n");
}

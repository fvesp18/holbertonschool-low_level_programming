#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int it = 0;
	va_list vars;
	char *st;

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
				st = va_arg(vars, char *);
				if (st)
				{
					printf("%s", st);
					break;
				}
				printf("(ni;)");
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

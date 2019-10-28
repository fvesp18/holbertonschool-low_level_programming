#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: types of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int it = 0;
	unsigned int flag;
	char *s;
	va_list vars;

	va_start(vars, format);
	while (format && format[it])
	{
		if (it != 0 && !flag)
			printf(", ");
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
				s = va_arg(vars, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				flag = 1;
				it++;
				continue;
		}
	flag = 0;
	it++;
	}
	va_end(vars);
	printf("\n");
}

#include "holberton.h"

/**
 * main - print string
 *
 * Return: void
 */

int main(void)
{
	char *str = "Holberton";
	int i  = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

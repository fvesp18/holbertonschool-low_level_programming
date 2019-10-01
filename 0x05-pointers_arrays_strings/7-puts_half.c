#include "holberton.h"

/**
 * puts_half - print half of a string
 * @str: location of str
 * Return: 0
 */

void puts_half(char *str)
{

	int len = 0;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
		while (n < len)
		{
		_putchar(str[n]);
		n++;
		}
	}

	else
	{
		n = (len + 1) / 2;
		while (n < len)
		{
		_putchar(str[n]);
		n++;
		}
	}
	_putchar('\n');
}

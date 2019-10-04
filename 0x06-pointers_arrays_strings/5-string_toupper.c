#include "holberton.h"

/**
 * string_toupper - converts lower to upper
 * @s: src string
 * Return: s
 */

char *string_toupper(char *s)
{
	int fir;

	for (fir = 0; s[fir] != '\0'; fir++)
	{
		if (s[fir] >= 'a' && s[fir] <= 'z')
		{
			s[fir] = s[fir] - 32;
		}
	}
	return (s);
}

#include "holberton.h"

/**
 *
 *
 *
 */

int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

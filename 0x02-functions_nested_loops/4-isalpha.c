#include "holberton.h"

/**
 * _isalpha - entry point
 * Description: Will look for upper and lower
 * Return: 0, 1
 * @c: sets up parameter
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

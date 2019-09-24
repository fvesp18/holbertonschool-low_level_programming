#include "holberton.h"

/**
 * main - entry point, is lower function
 *
 * Return: 0 if uppercase
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	return (0);
}

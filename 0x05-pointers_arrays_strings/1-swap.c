#include "holberton.h"

/**
 * swap_int - swap the values of int a and int b
 * @a: first value
 * @b: second value
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;

	*b = c;
}

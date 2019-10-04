#include "holberton.h"

/**
 * reverse_array - reverse an array
 * @a: array
 * @n: size of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int buffer;

	n = n - 1;

	while (i < n)
	{

		buffer = a[n];
		a[n] = a[i];
		a[i] = buffer;

		i++;
		n--;
	}

}

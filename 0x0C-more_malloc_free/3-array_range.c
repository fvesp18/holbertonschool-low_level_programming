#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, big;

	size = max - min;

	if (min > max)
		return (NULL);

	arr = malloc((1 + size) * sizeof(int));
	if (!arr)
		return (NULL);

	for (big = 0; big <= size; big++)
		arr[big] = min++;

	return (arr);
}

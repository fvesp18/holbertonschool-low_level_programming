#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * linear_search - algorithm
 * @array: data to be processed
 * @size: size of array
 * @value: value found at array[comp]
 * Return: comp, or -1 on failure
 */


int linear_search(int *array, size_t size, int value)
{
	size_t comp = 0;

	for ( ; comp <= size ; comp++)
	{
		printf("Value checked array[%lu] = [%d]\n",
				comp, array[comp]);
		if (array[comp] == value)
			return (comp);
	}
	return (-1);
}

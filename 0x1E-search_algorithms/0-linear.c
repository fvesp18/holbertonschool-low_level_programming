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
	unsigned int comp = 0;

	for ( ; comp < size ; comp++)
	{
		printf("Value checked array[%d] = [%d]\n",
				comp, array[comp]);
		if (array[comp] == value)
			return (comp);
	}
	if (array == NULL)
		return (-1);
	return (-1);
}

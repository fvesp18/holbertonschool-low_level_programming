#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter for each element
 * @array: array
 * @size: size of array
 * @action: function to be processed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count = 0;

	if (action && array)
	{
		while (count < size)
		{
			action(array[count]);
			count++;
		}
	}
}

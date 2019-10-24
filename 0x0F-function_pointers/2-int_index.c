#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of elements to be printed
 * @size: size of array
 * @cmp: compare function
 * Return: -1, if no element match
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int ind;

	if (size == 0)
		return (-1);
	if (array && cmp)
	{
		for (ind = 0; ind < size; ind++)
		{
			if (cmp(array[ind]))
				return (ind);
		}
	}
	return (-1);

}

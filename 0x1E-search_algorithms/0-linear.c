#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


int linear_search(int *array, size_t size, int value)
{
	size_t comp = 0;
	for (; comp <= size; comp++)
	{
		printf("Value checked array[%lu] = [%d]\n", 
				comp, array[comp]);
		if (array[comp] == value)
			return(comp);
	}
	return(-1);
}

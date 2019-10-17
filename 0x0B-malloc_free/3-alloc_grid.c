#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a 2 dimensional array
 * @width: grid width
 * @height: grid height
 * Return: Null or 0
 */

int **alloc_grid(int width, int height)
{
	int row, col, i;
       	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int*) * height);
	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		*(grid + row) = malloc(sizeof(int) * width);
		if (*(grid + row) == NULL)
			return (NULL);
		for (i = 0; i < row; i++)
		{
			free(*(grid + i));
			free(grid);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
		for (col = 0; col < width; col++)
			grid[row][col] = 0;

	return (grid);
}

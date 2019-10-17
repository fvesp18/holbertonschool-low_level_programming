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
	int row, col;
	int **grid;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));

		if (grid[row] == NULL)
		{
		for (col = 0; col < row; col++)
			free(grid[col]);

		free(grid);
		return (NULL);
		}
	}
	for (col = 0; col < width; col++)
	{
		grid[row][col] = 0;
	}
	return (grid);
}

#include <stdlib.h>
#include "holberton.h"

/**
 *free_grid - a function that frees a 2 dimensional grid
 *@height: vairble's value of the first array
 *@grid: the grid to be freed
 *
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

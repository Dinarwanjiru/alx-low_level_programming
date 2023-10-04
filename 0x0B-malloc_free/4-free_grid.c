#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *free_grid - frees a 2D grid previously created by alloc_grid function
 *@height: grid's height
 *@grid: 2D grid
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}


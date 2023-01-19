#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid created by alloc_grid function.
 * @grid: address of the two dimensional grid
 * @height: height of the grid
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(grid[j]);
			}

			free(grid);
		}
	}
}

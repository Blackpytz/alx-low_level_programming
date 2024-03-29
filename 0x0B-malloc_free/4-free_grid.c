#include "main.h"

/**
* free_grid - Function that frees a 2 dimensional grid.
* @grid: Double pointer to the 2D gird to be freed.
* @height: height of the array.
*
* Return: nothing.
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

#include "main.h"

/**
* free_grid - function that frees a 2D grid previously created by
* alloc_grid function
* @grid: pointer to an array of pointers
* @height: height of the 2d array
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

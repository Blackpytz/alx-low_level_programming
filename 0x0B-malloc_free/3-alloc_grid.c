#include "main.h"

/**
* alloc_grid - function that returns a pointer to a 2D array of integers
* @width: width of the 2 dimensional array
* @height: height of the 2 dimensional array
*
* Return: A pointer to the allocated 2D array or NULL on failure.
*/
int **alloc_grid(int width, int height)
{
	int *grid;
	unsigned int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
			free(grid[i]);
		free(grid);
	}
	for (j = 0; j < width; j++)
		grid[i][j] = 0;

	return (grid);
}

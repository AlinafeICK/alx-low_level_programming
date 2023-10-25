#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by our alloc_grid function
 * @grid: double pointer arg
 * @height: int parameter
 * Return: free'd dimensional grid
 */
void free_grid(int **grid, int height)
{
	int i;


	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees  a two dimensional grid
 * @grid: is the array(2-D)
 * @height: is the number of rows
 *
 * Return: 0 Always (success)
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

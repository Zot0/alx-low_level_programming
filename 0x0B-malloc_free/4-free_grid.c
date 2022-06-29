#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2d grid previously created
 * @grid: Rows
 * @height: Columns
 * Return: Pointer or null
 */

void free_grid(int **grid, int height)
{
	int a;
	int *b;

	for (a = 0; a < height; a++)
	{
		b = grid[a];
		free(b);
	}
	free(grid);
}

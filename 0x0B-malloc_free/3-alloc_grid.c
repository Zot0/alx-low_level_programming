#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a 2d array
 * @width: Rows
 * @height: Columns
 *
 * Return: Pointer or NULL otherwise
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int a;
	int b;
	int c;
	int *d;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		*(arr + a) = (int *)malloc(width * sizeof(int));
		if (*(arr + a) == NULL)
		{
			for (a = 0; a < height; a++)
			{
				d = arr[a];
				free(d);
			}
			free(arr);
			return (NULL);
		}
	}
	for (c = 0; c < height; c++)
	{
		for (b = 0; b < width; b++)
		{
			arr[c][b] = 0;
		}
	}
	return (arr);
}

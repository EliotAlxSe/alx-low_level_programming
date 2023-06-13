#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: The width of the 2D array
 * @height: The height of the 2D array
 *
 * Return: 2D array. If the program fails then return NULL
 */
int **alloc_grid(int width, int height)
{
	int **alloc;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);
	alloc = malloc(sizeof(int *) * height);

	if (alloc == NULL)
	{
		free(alloc);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		alloc[i] = malloc(sizeof(int) * width);

		if (alloc[i] == NULL)
		{
			for (j = 0; j >= 0; j--)
				free(alloc[j]);
			free(alloc);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			alloc[k][j] = 0;
		}
	}
	return (alloc);
}

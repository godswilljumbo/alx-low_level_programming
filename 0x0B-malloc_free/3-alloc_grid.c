#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Function
 * @width: width
 * @height: height
 * Return: pointer if success. NULL on failure
 * negative if either width or height is 0.
 */
int **alloc_grid(int width, int height)
{
	int g, j, gj, **w;

	if (width <= 0 || height <= 0)
		return (NULL);
	w = (int **)malloc(sizeof(int *) * height);
	if (w == NULL)
		return (NULL);
	for (g = 0; g < height; g++)
	{
		w[g] = (int *)malloc(sizeof(int *) * width);
		if (w[g] == NULL)
		{
			for (j = 0; j < g; j++)
			free(w[j]);
			free(w);
			return (NULL);
		}
		gj = 0;
		for (j = 0; j < width; j++)
			w[g][j] = gj;
	}
	return (w);
}

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
	int g, j, gj, **s;

	if (width <= 0 || height <= 0)
		return (NULL);
	s = (int **)malloc(sizeof(int *) * height);
	if (s == NULL)
		return (NULL);
	for (g = 0; g < height; g++)
	{
		s[g] = (int *)malloc(sizeof(int *) * width);
		if (s[g] == NULL)
		{
			for (j = 0; j < g; j++)
				free(s[j]);
						free(s);
						return (NULL);
						}
						gj = 0;
						for (j = 0; j < width; j++)
						s[g][j] = gj;
						}
						return (s);
						}

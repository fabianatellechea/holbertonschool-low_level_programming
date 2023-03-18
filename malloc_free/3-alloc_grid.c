#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a p
 * @width: width
 * @height: height
 * Return: pointer to a 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int h, i, j;
	int **p;

	if ((width <= 0) || (height <= 0))
	{

		return (NULL);
	}

	p = malloc(height * sizeof(int *));

	if (p)
		for (i = 0; i < height; i++)
		{
			p[i] = malloc(width * sizeof(int));

		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}

			free(p);
			return (NULL);
		}

			for (h = 0; h < width; h++)
			{
				p[i][h] = 0;
			}
		}
	return (p);
}

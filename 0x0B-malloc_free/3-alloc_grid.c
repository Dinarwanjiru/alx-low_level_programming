#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid -
 *@width:
 *@height:
 *
 *Return:
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **hewi;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	hewi = malloc(sizeof(int *) * height);

	if (hewi == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		hewi[i] = malloc(sizeof(int) * width);
		if (hewi[i] == NULL)
		{
			for (j = 0; j < i ;j++)
			{
				free(hewi[j]);
			}
			free (hewi);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			hewi[i][j] = 0;
		}
	}
	return (hewi);
}

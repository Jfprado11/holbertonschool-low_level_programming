#include <stdlib.h>
#include "holberton.h"

/**
 *alloc_grid -  a pointer to a 2 dimensional array of integers
 *@width: vairble's value of the first array
 *@height: variable's value of the second array
 *
 *Return: a double pointer
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int a, b, c, s;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}
	ar = malloc(height * sizeof(int *));
	if (ar == NULL)
	{
		free(ar);
		return (0);
	}
	for (a = 0; a < height; a++)
	{
		ar[a] = malloc(width * sizeof(int));
			if (ar[a] == NULL)
			{
				for (s = 0; s <= a; s++)
				{
					free(ar[s]);
				}
				free(ar);
				return (0);
			}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			ar[b][c] = 0;
		}
	}
	return (ar);
}

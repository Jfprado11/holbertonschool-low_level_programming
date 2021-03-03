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
	int a;

	if (width < 1)
	{
		return (NULL);
	}
	if (height < 1)
	{
		return (NULL);
	}
	ar = malloc(width * sizeof(int *));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < width; a++)
	{
		ar[a] = malloc(height * sizeof(int));
			if (ar[a] == NULL)
			{
				return (NULL);
			}
	}
	return (ar);
}

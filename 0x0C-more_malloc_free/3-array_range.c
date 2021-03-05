#include <stdlib.h>
#include "holberton.h"

/**
 *array_range - a function that creates an array of integers
 *@min: minimun amout of the array
 *@max: maximun amoun of the array
 *
 *Return: a pointer with the array
 */
int *array_range(int min, int max)
{

	int a, b, len = 0;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	for (b = min; b <= max; b++)
	{
		len++;
	}
	array = malloc(sizeof(*array) * len);
	if (array == 0)
	{
		return (0);
	}
	for (a = 0; a < len; a++)
	{
		array[a] = min;
		min++;
	}
	return (array);
}

#include "search_algos.h"
#include <math.h>

/**
 *jump_search - searches for a value in array of integers using the Jump search
 *@array: the array to be search
 *@size: the size of the array
 *@value: the value to be search for
 *
 *Return: the index where the value where found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, x, i = 0;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	while (array[step] <= value && step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = step;
		step += sqrt(size);
		if (step > size - 1)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, step);
	for (x = i; x < step; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}

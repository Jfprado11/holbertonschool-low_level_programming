#include "search_algos.h"
#include <math.h>

size_t _min(size_t left, size_t rigth);
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
	size_t step, i = 0;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	while (array[_min(step, size)] < value && step < size)
	{
		i = step;
		step += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (i >= size)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, step);
	while (array[i] < value)
	{
		if (i == _min(step, size))
			return (-1);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	if (array[i] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		return (i);
	}
	return (-1);
}

/**
 * _min - return the less value
 * @left: a value to be compared
 * @rigth: a value to be compared
 *
 * Return: the less value
 */
size_t _min(size_t left, size_t rigth)
{
	if (left < rigth)
	{
		return (left);
	}
	else
	{
		return (rigth);
	}
}

#include "search_algos.h"

/**
 * linear_search - perform a liniar search
 * @array: a pointer to to first element of teh array
 * @size: is the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index of the array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

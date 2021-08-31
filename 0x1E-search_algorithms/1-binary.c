#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: the array to be search
 * @size: the size of the array
 * @value: the value to be search
 *
 * Return: the index of the array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left = 0;
	size_t rigth = size - 1;
	size_t medid;

	if (array == NULL)
		return (-1);

	while (left <= rigth)
	{
		printf("Searching in array: ");
		i = left;
		while (i <= rigth)
		{
			if (i == rigth)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
			i++;
		}
		medid = (left + rigth) / 2;
		if (array[medid] == value)
		{
			return (medid);
		}
		else if (value < array[medid])
		{
			rigth = medid - 1;
		}
		else
		{
			left = medid + 1;
		}
	}
	return (-1);
}

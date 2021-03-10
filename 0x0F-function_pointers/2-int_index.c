#include "function_pointers.h"

/**
 *int_index - return the index of array where the cmp worked
 *@array: array to function
 *@size: size of the array
 *@cmp: pointer to a function
 *
 *Return: a varible wiht the index number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (cmp == NULL)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (y = 0; y < size; y++)
	{
		if (cmp(array[y]) != 0)
		{
			return (y);
		}
	}
	return (-1);
}

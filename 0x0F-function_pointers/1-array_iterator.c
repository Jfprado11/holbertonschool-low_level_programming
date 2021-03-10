#include "function_pointers.h"

/**
 *array_iterator - function to executes each element of array
 *@array: array to function
 *@size: size of the array
 *@action: pointer to a function
 *
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (action == NULL)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}
	for (y = 0; y < size; y++)
	{
		action(array[y]);
	}
}

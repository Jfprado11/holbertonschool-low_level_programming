#include "holberton.h"

/**
 *clear_bit - set the bits to 0 in a position
 *@n: the number
 *@index: the index of the number
 *Return: 1 if it success or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int comp;

	if (index > 63)
	{
		return (-1);
	}
	comp = 1 << index;
	*n = *n ^ comp;
	if (*n == 0)
	{
		return (1);
	}
	return (1);
}

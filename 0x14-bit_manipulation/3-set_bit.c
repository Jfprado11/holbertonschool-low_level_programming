#include "holberton.h"

/**
 *set_bit - set the bits to 1 in a position
 *@n: the number
 *@index: the index of the number
 *Return: 0 if it success or 1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int comp;

	if (index > 63)
	{
		return (-1);
	}
	comp = 1 << index;
	*n = *n | comp;
	return (0);
}

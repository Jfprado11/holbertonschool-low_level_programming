#include "holberton.h"

/**
 *get_bit - obtains the bit of the number by index
 *@n: the number to be converted into binary
 *@index: index of the bit to be found
 *
 *Return: 1 if the posiiton is 1 or 0 is position is 0, -1 for any error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	result = n >> index;
	if (result & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (-1);
}

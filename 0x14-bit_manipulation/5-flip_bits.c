#include "holberton.h"

/**
 *flip_bits - return the number needed to conver a number to another
 *@n: number one
 *@m: the number where number one is going to be converted
 *Return: the numbers of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int bit_n, bit_m;

	while (n || m)
	{
		bit_n = n & 1;
		bit_m = m & 1;

		if (bit_n != bit_m)
		{
			count++;
		}
		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}

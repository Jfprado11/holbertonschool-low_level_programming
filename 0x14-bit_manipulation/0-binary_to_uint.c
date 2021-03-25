#include "holberton.h"
#include "holberton.h"

/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b: the number to be convert into a decimal
 *
 *Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int h, i = 0, i2 = 0;
	unsigned int bit, result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	h = i - 1;
	while (b[i2] != '\0')
	{
		if (b[i2] == '0')
		{
			bit = 0;
		}
		if (b[i2] == '1')
		{
			bit = 1;
		}
		result += bit << h;
		h--;
		i2++;
	}
	return (result);
}

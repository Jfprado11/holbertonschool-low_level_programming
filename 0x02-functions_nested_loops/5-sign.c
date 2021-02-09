#include "holberton.h"

/**
 * print_sign - Tells if the numeber is postive or negative
 * @n: the number to be check
 *
 * Return: 1 if the number is positive. 0 is the numeber is zero. -1 otherwise
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

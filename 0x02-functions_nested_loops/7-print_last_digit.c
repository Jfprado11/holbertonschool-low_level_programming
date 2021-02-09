#include "holberton.h"

/**
 *print_last_digit - gives the absulute value of a number
 *@x: the number to be check
 *
 * Return: the last number
 */
int print_last_digit(int x)
{
	x = x % 10;

	if (x < 0)
	{
		x = -x;
	}
	_putchar(x + '0');
	return (x);
}

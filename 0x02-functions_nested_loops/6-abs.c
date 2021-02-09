#include "holberton.h"

/**
 *_abs - gives the absulute value of a number
 *@x: the number to be check
 *
 * Return: the value of an absolute
 */
int _abs(int x)
{

	if (x < 0)
	{
		x = (-1) * x;
	}
	else
	{
		x = 1 * x;
	}
	return (x);
}

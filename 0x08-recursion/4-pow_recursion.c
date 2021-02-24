#include "holberton.h"

/**
 *_pow_recursion - calcule the power using recursive
 *@x: base number
 *@y: power number
 *Return: the result of the equation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

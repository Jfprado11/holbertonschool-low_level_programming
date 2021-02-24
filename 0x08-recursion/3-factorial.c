#include "holberton.h"

/**
 *factorial - a function to find the factorial number
 *@n: number to find the factorial
 *
 *Return: the factorial number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

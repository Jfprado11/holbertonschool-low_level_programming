#include "variadic_functions.h"

/**
 *sum_them_all - returns the sum of all its parameters
 *@n: numbers of arg
 *
 *Return: the value of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ag;
	unsigned int a, sum = 0;

	va_start(ag, n);
	for (a = 0; a < n; a++)
	{
		sum = sum + va_arg(ag, int);
	}
	va_end(ag);
	return (sum);
}

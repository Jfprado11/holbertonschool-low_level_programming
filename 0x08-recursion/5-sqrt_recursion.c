#include "holberton.h"

int _root(int a, int b);
/**
 *_sqrt_recursion - print the squere number
 *@n: number to discover squere root number
 *
 *Return: the square result
 */
int _sqrt_recursion(int n)
{
	int h = 0;

	if (n < 0)
	{
		return (-1);
	}
	return (_root(n, h + 1));
}
/**
 *_root - calcule the squere root
 *@a: base number
 *@b: power number
 *
 *Return: the square root number
 */
int _root(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}
	return (_root(a, b + 1))
}

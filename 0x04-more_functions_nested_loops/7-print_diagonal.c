#include "holberton.h"

/**
 *print_diagonal - a function that prints
 *@n: first varible to multiple
 *
 *Return: nothing
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
				if (a == b)
				{
					_putchar(92);
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

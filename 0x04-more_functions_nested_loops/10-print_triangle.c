#include "holberton.h"

/**
 *print_triangle - Tells if the characters are uppercase
 *@size: tells how long is going to be the pyramide
 *
 *Return: nothing
 */
void print_triangle(int size)
{
	int  r, f, c, nc, nf;

	nc = size;
	nf = size - 1;

	if (size > 0)
	{
		for (r = 1; r <= nc; r++)
		{
			for (c = 1; c <= nf; c++)
			{
				_putchar(' ');
			}
			nf--;
			for (f = 1; f <= r; f++)
			{
				_putchar('*');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 *print_square - Tells if the characters are uppercase
 *@size: first varible to multiple
 *
 *Return: nothing
 */
void print_square(int size)
{
	int c;
	int f;

	for (f = 0; f < size; f++)
	{
		for (c = 0; c < size; c++)
		{
			if (size == 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}

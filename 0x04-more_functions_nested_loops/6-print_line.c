#include "holberton.h"

/**
 *print_line - Tells if the characters are uppercase
 *@n: number how many times it will create a '_'
 *
 *Return: nothing
 */
void print_line(int n)
{
	int l;

	for (l = 0; l <= n; l++)
	{
		if (l > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

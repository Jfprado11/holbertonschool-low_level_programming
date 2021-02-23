#include "holberton.h"

/**
 *_strpbrk - function locates a string on any byte
 *@s: string to be compare
 *@accept: string to be compare
 *
 *Return: a pointer with the value
 */
void print_chessboard(char (*a)[8])
{
	int r,l;

	for (r = 0;r < 8; r++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar(a[r][l]);
		}
		_putchar('\n');
	}
}

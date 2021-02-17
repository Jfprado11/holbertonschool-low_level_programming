#include "holberton.h"

/**
 *print_rev - Tells the length or size of a string
 *@s: varible to test the string
 *
 *Return: len the length of the string
 */
void print_rev(char *s)
{
	int i, l;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	i = l - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

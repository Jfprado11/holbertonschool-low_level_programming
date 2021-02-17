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
	while (*s != '\0')
	{
		l++;
		s++;
	}
	for (i = l; i >= 0; --i)
	{
		_putchar(*s);
		--s;
	}
	_putchar('\n');
}

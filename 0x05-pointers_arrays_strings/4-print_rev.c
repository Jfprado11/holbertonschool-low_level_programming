#include "holberton.h"

/**
 *print_rev - Tells the length or size of a string
 *@s: varible to test the string
 *
 *Return: len the length of the string
 */
int _strlen(char *s);

void print_rev(char *s)
{
	int i, l;

	l = 0;
	while (*s != 0)
	{
		s++;
		l++;
	}
	for (i = l; i >= 0; --i)
	{
		_putchar(*s);
		--s;
	}
	_putchar('\n');
}

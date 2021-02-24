#include "holberton.h"

/**
 *_puts_recursion - a function that print a string recursive
 *@s: string stored
 *
 *return: nothing
 */
void _puts_recursion(char *s)
{
	int a = *s;

	_putchar(a);
	if (a > '\0')
	{
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}

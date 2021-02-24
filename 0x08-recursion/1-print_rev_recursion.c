#include "holberton.h"

/**
 *_print_rev_recursion - a function that print a string rev recursive
 *@s: string stored
 *
 *return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(a);
}

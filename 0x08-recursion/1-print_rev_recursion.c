#include "holberton.h"

/**
 *_print_rev_recursion - a function that print a string rev recursive
 *@s: string stored
 *
 *return: nothing
 */
void _print_rev_recursion(char *s)
{
	int a = 0;

	if (s[a] != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	_putchar(s[a]);
}

#include "holberton.h"

/**
 *_puts_recursion - a function that print a string recursive
 *@s: string stored
 *
 *return: nothing
 */
void _puts_recursion(char *s)
{
	int a = 0;

	if (s[a] != '\0')
	{
		_putchar(s[a]);	
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

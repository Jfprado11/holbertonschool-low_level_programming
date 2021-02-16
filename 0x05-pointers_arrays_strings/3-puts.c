#include "holberton.h"

/**
 *_puts - Tells the length or size of a string
 *@str: varible to print
 *
 *Return: nothing
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 *puts2 - Tells the length or size of a string
 *@str: varible to print
 *
 *Return: nothing
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
		_putchar(str[a]);
		}
	}
	_putchar('\n');
}

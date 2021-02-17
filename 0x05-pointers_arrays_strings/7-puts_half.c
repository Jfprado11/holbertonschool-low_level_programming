#include "holberton.h"

/**
 *puts_half - a function to reverse a string
 *@str: varible to make a reverse string
 *
 *Return: nothing
 */
void puts_half(char *str)
{
	int a, l, hlo;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		hlo = l / 2;
	}
	else
	{
		hlo = (l - 1) / 2;
	}
	for (a = hlo; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}

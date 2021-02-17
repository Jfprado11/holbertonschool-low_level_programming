#include "holberton.h"

/**
 *puts_half - a function to reverse a string
 *@str: varible to make a reverse string
 *
 *Return: nothing
 */
void puts_half(char *str)
{
	int a, l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	if (l % 2 == 0)
	{
		a = l / 2;
	}
	else
	{
		a = (l - 1) / 2;
	}
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}

#include "holberton.h"
#include <stdio.h>

/**
 *rev_string - a function to reverse a string
 *@s: varible to make a reverse string
 *
 *Return: nothing
 */
void rev_string(char *s)
{
	int i, l;
	char aux;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	l = l -1;
	for (l--, i = 0; i < l / 2; i++, l--)
	{
		aux = s[l];
		s[l] = s[i];
		s[i] = aux;
	}
}

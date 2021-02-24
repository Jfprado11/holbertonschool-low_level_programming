#include "holberton.h"

/**
 *_strlen_recursion - a function that print the length of a string
 *@s: string stored
 *
 *Return: the value of the string
 */
int _strlen_recursion(char *s)
{
	int a = 1;

	if (*s == '\0')
	{
		return (0);
	}
	return (a + _strlen_recursion(s + 1));
}

#include "holberton.h"

/**
 *_isdigit - Tells if the characters are uppercase
 *@c: the variable that tells the char from a to z
 *
 *Return: 1 is upper. 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

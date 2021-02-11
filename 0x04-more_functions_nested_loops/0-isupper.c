#include "holberton.h"

/**
 *_isupper - Tells if the characters are uppercase
 *@c: the variable that tells the char from a to z
 *
 *Return: 1 is upper. 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "holberton.h"

/**
 * _islower - Tells if a char is lower case
 * @c: the number to be check
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

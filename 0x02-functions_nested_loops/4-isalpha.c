#include "holberton.h"

/**
 * _isalpha - Tells if a char is lower case
 * @c: the number to be check
 *
 * Return: 1 if the number is positive. 0 otherwise
 */
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}

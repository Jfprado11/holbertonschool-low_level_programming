#include "holberton.h"

/**
 *_isupper - Tells if the characters are uppercase
 *@c: the variable that tells the char from a to z
 * 
 *return: 1 is upper. 0 otherwise
 */
int _isupper(int c)
{
	if(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

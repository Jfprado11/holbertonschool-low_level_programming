#include "holberton.h"

/**
 *rot13 - make a string into a rot 13
 *@m: varible to the array
 *
 *Return: encoded string
 */
char *rot13(char *m)
{
	int a;

	for (a = 0; m[a] != '\0'; a++)
	{
		if ((m[a] >= 'a' && m[a] <= 'm') || (m[a] >= 'A' && m[a] <= 'M'))
		{
			m[a] = m[a] + 13;
		}
	}
	return (m);
}

#include "holberton.h"

/**
 *_strpbrk - function locates a string on any byte
 *@s: string to be compare
 *@accept: string to be compare
 *
 *Return: a pointer with the value
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b = 0;

	if (s == '\0' || accept == '\0')
	{
		return ('\0');
	}
	for (a = 0; s[a] != '\0'; a++)
	{
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
			else
			{
				b++;
			}
		}
		b = 0;
	}
	return ('\0');
}

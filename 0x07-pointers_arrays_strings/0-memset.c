#include "holberton.h"

/**
 *_memset - fill memory with a constat byte
 *@s: pointer with new value
 *@b: constant byte type
 *@n: fill the first bytes
 *
 *Return: a pointer with the value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

#include "holberton.h"

/**
 *_strncpy - a function to copy a string
 *@dest: variable to destinetion
 *@src: variable sorce
 *@n: varible of bites
 *
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lon2;

	for (lon2 = 0; lon2 < n && src[lon2] != '\0'; lon2++)
	{
		dest[lon2] = src[lon2];
	}
	for ( ; lon2 < n; lon2++)
	{
		dest[lon2] = '\n';
	}
	return (dest);
}

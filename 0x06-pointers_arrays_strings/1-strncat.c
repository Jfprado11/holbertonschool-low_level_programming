#include "holberton.h"

/**
 *_strNcat - a function to concanate two strings
 *@dest: variable to destinetion
 *@src: variable sorce
 *@n: varible of bites
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lon = 0;
	int lon2;

	while (dest[lon] != '\0')
	{
		lon++;
	}
	for (lon2 = 0; lon2 < n && src[lon2] != '\0'; lon2++)
	{
		dest[lon + lon2] = src[lon2];
	}
	return (dest);
}

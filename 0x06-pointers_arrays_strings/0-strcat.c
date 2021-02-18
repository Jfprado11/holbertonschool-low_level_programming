#include "holberton.h"

/**
 *_strcat - a function to concanate two strings
 *@dest: variable to destinetion
 *@src: variable sorce
 *
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int lon = 0;
	int lon2 = 0;

	while (dest[lon] != '\0')
	{
		lon++;
	}
	while (src[lon2] != '\0')
	{
		dest[lon + 1] = src[lon2];
		lon++;
		lon2++;
	}
	dest[lon] = '\0';
	return (dest);
}

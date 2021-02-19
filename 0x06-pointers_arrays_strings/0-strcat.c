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
	int lon2;

	while (dest[lon] != '\0')
	{
		lon++;
	}
	for (lon2 = 0; src[lon2] != '\0'; lon2++)
	{
		dest[lon + lon2] = src[lon2];
	}
	src[lon2] = '\0';
	return (dest);
}

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

	while (src[lon] != '\0')
	{
		lon++;
	}
	while (dest[lon2] != '\0')
	{
		src[lon]= dest[lon2];
		lon++;
		lon2++;
	}
	src[lon] = '\0';
	return (src);
}

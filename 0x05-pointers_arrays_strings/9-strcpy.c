#include "holberton.h"

/**
 *_strccpy - a function to copy a string to another
 *@dest: varibel where the destiniton is going
 *@src: varible source of the destinition
 *
 *Return: a variable
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return aux;
}

#include <stdlib.h>
#include "holberton.h"

/**
 *create_array - a funtion that a creates an array
 *@size: vairble that tells the amount needed in the heap
 *@c: variable with the new information
 *
 *Return: a pointer
 */
char *_strdup(char *str)
{
	int len;
	char *dup;
	char *duppass;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	dup = malloc(sizeof(char) * len + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	duppass = dup;
	while (*str != '\0')
	{
		*duppass = *str;
		duppass++;
		str++;
	}
	*duppass = '\0';
	return (dup);
}

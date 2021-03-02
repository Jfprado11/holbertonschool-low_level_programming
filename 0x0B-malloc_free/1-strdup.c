#include <stdlib.h>
#include "holberton.h"

/**
 *_strdup - returns a pointer to a newly allocated space in memory an copied
 *@str: the string that we copied
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
	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(sizeof(char) * len);
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

#include <stdlib.h>
#include "holberton.h"

int _strlen(char *s);
/**
 *str_concat - function to concanate two strngs
 *@s1: first string
 *@s2: second string
 *
 *Return: a string concanated
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int a, b, c;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = _strlen(s1);
	b = _strlen(s2);
	c = a + b + 1;
	cat = malloc(sizeof(char) * c);
	if (cat == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		cat[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		cat[i] = *s2;
		s2++;
		i++;
	}
	cat[i] = '\0';
	return (cat);
}

/**
 *_strlen - Tells the length or size of a string
 *@s: varible to test the string
 *
 *Return: len the length of the string
 */
int _strlen(char *s)
{
	int lon = 0;

	while (*s != 0)
	{
		s++;
		lon++;
	}
	return (lon);
}

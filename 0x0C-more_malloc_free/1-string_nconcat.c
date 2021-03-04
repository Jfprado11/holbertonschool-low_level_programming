#include <stdlib.h>
#include "holberton.h"

unsigned int _strlen(char *s);
/**
 *string_nconcat -  a function that concatenates two strings
 *@n: the size of the memory we need
 *@s2: strign number 2
 *@s1: string number 1
 *
 *Return: a concataded string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, a, b;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
		{
			return (0);
		}
		for (a = 0; s1[a] != '\0'; a++)
		{
			str[a] = s1[a];
		}
		for (b = 0; s2[b] != '\0'; b++)
		{
			str[a + b] = s2[b];
		}
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + n + 1));
		if (str == NULL)
		{
			return (0);
		}
		for (a = 0; s1[a] != '\0'; a++)
		{
			str[a] = s1[a];
		}
		for (b = 0; b < n; b++)
		{
			str[a + b] = s2[b];
		}
	}
	str[a + b] = '\0';
	return (str);
}
/**
 *_strlen - Tells the length or size of a string
 *@s: varible to test the string
 *
 *Return: len the length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int lon = 0;

	while (*s != 0)
	{
		s++;
		lon++;
	}
	return (lon);
}

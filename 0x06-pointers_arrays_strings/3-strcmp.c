#include "holberton.h"

/**
 *_strcmp - a function that compares two strings
 *@s2: variable to compare one string
 *@s1: variable to compare other string
 *
 *Return: 0 if string are the same. 1 otherwise
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int cmp = 0;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			cmp = 1;
			break;
		}
	}
	if (cmp == 0)
	{
		return (0);
	}
	else
	{
		return (s1[a] - s2[a]);
	}
}

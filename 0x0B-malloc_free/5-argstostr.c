#include <stdlib.h>
#include "holberton.h"

int _strlen(char *s);
/**
 *argstostr - concatenates all the arguments of your program
 *@ac: vairble with number of arg
 *@av: variable with the string.
 *
 *Return: a poitner with a string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, l = 0;
	int len = 0;
	char *astr;

	if (ac == 0 || av == 0)
	{
		return (0);
	}
	for (i = 0; i < ac; i++)
	{
		len += _strlen(av[i] + 1);
	}
	astr = malloc(sizeof(char) * (len + 1));
	if (astr == 0)
	{
		return (0);
	}

	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			astr[l] = av[j][k];
			l++;
		}
		astr[l] = '\n';
		l++;
	}
	astr[l] = '\0';
	return (astr);
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

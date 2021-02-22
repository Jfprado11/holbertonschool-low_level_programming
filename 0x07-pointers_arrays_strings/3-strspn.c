#include "holberton.h"

/**
 *_strspn - function that gets the length of a prefix substring
 *@s: string number 1
 *@accept: substring
 *
 *Return: a pointer with the value
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, count;

	count = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (count == s[a])
				break;

			if (accept[b] == s[count])
				count++;
		}
	}
	return (count);
}

#include "holberton.h"

/**
 *leet - cap every word in String
 *@m: varible to the array
 *
 *Return: encoded string
 */
char *leet(char *m)
{
	int a, i;
	char *a1, *a2;

	a1 = "aAeEoOtTlL";
	a2 = "4433007711";
	for (a = 0; m[a] != '\0'; a++)
	{
		for (i = 0; i <= 9; i++)
		{
			if (m[a] == a1[i])
			{
				m[a] = a2[i];
			}
		}
	}
	return (m);
}

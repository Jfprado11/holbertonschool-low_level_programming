#include "holberton.h"

/**
 *cap_string - cap every word in String
 *@a: varible to the array
 *
 *Return: a pointer
 */
char *cap_string(char *a)
{
	int l = 0;
	int bs;
	char b[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\t', '\n', ' '};

	for ( ; a[l] != '\0'; l++)
	{
		for (bs = 0; b[bs] != '\0'; bs++)
		{
		if (l == 0)
		{
			if (a[l] >= 'a' && a[l] <= 'z')
			{
				a[l] = a[l] - 32;
			}
			continue;
		}
		if (a[l] == b[bs])
		{
			++l;
			if (a[l] >= 'a' && a[l] <= 'z')
			{
				a[l] = a[l] - 32;
				continue;
			}
		}
		}
	}
	return (a);
}

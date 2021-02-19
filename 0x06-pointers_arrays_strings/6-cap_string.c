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

	for ( ; a[l] != '\0'; l++)
	{
		if (l == 0)
		{
			if (a[l] >= 'a' && a[l] <= 'z')
			{
				a[l] = a[l] - 32;
			}
			continue;
		}
		if (a[l] == ' ')
		{
			++l;
			if (a[l] >= 'a' && a[l] <= 'z')
			{
				a[l] = a[l] - 32;
				continue;
			}
			else
			{
				if (a[l] >= 'A' && a[l] <= 'Z')
				{
					a[l] = a[l] + 32;
				}
			}
		}
	}
	return (a);
}

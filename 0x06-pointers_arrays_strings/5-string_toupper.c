#include "holberton.h"

/**
 *string_toupper - goes to upper case
 *@a: varible to the array
 *
 *Return: nothing
 */
char *string_toupper(char *a)
{
	int l = 0;

	while (a[l] != '\0')
	{
		if (a[l] >= 'a' && a[l] <= 'z')
		{
			a[l] = a[l] - 32;
		}
		l++;
	}
	return (a);
}

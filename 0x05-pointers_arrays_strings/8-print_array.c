#include "holberton.h"
#include <stdio.h>

/**
 *print_array - a function to print
 *@a: variable
 *@n: variable
 *
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
		printf(", ");
		}
	}
	putchar('\n');
}

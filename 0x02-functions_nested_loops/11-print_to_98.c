#include "holberton.h"
#include <stdio.h>

/**
 *print_to_98 - prints the number until 98
 *@n: given first number
 *
 * Return: the sum of two numbers
 */
void print_to_98(int n)
{
	if (n <= 98)
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}

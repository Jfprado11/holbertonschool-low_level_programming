#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - programs taht tells its name
 *@argc: varible counts
 *@argv: a string
 *
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a;
	int mul = 1;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			mul = atol(argv[1]) * atol(argv[2]);
		}
		printf("%d\n", mul);
	}
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

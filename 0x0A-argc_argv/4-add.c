#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - programs taht tells its name
 *@argc: varible counts
 *@argv: a string
 *
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int a, i;
	int plus = 0;

	for (a = 1; a < argc; a++)
	{
		for (i = 0; argv[a][i]; i++)
		{
			if (isdigit(argv[a][i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (a = 1; a < argc; a++)
	{
		plus += atoi(argv[a]);
	}
	printf("%d\n", plus);
	return (0);
}

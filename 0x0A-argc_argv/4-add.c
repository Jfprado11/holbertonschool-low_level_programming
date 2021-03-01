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
	int a;
	int plus = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			if (isdigit(*argv[a]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				plus += atoi(argv[a]);
			}
		}
		printf("%d\n", plus);
	}
	return (0);
}

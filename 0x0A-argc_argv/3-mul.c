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
	int mul;

	for (a = 1; a < argc; a++)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
	}
	if (argc > 1)
	{
		printf("%d\n", mul);
		return (0);
	}
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

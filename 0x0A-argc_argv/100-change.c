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
	int a, cent, count, save;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			cent = atoi(argv[1]);
		}
		if (cent < 0)
		{
			printf("0\n");
		}
		if (cent >= 25)
		{
			count = cent / 25;
			cent = cent % 25;
			save = count;
			if (cent == 0)
			{
				printf("%d\n", save);
			}
		}
		if (cent >= 10)
		{
			count = cent / 10;
			cent = cent % 10;
			save = count + save;
			if (cent == 0)
			{
				printf("%d\n", save);
			}
		}
		if (cent >= 5)
		{
			count = cent / 5;
			cent = cent % 5;
			save = count + save;
			if (cent == 0)
			{
				printf("%d\n", save);
			}
		}
		if (cent >= 2)
		{
			count = cent / 2;
			cent = cent % 2;
			save = count + save;
			if (cent == 0)
			{
				printf("%d\n", save);
			}
		}
		if (cent >= 1)
		{
			count = cent / 1;
			cent = cent % 1;
			save = count + save;
			if(cent == 0)
			{
				printf("%d\n", save);
			}
		}
	}
	return (save);
}

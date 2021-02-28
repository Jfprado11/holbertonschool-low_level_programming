#include "holberton.h"
#include <stdio.h>

/**
 *main - programs taht tells its name
 *@argc: varible counts
 *@argv: a string
 *
 *Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", --argc);
	(void)argv;
	return (0);
}

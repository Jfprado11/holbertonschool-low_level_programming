#include <stdlib.h>
#include "holberton.h"

/**
 *malloc_checked - a function that allocates memory using malloc
 *@b: the size of the memory we need
 *
 *Return: 
 */
void *malloc_checked(unsigned int b)
{
	void *loc;

	loc = (void *)malloc(b);

	if (loc == 0)
	{
		exit(98);
	}
	return(loc);
}

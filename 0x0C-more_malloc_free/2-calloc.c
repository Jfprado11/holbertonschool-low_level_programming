#include <stdlib.h>
#include "holberton.h"

/**
 *_calloc - a function that allocates memory for an array, using malloc
 *@nmemb: amout if space we need to need
 *@size: the type of pointer
 *
 *Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *loc;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	loc = (void *)malloc(nmemb * size);
	if (loc == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
	{
		loc[a] = 0;
	}
	return (loc);
}

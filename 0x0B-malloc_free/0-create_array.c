#include <stdlib.h>
#include "holberton.h"

/**
 *
 *
 *
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * size);
	for (a = 0; a < size; a++)
	{
		p[a] = c;
	}
	p[a] = '\0';
	return (p);
}

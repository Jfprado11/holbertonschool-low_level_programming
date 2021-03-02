#include <stdlib.h>
#include "holberton.h"

/**
 *create_array - a funtion that a creates an array
 *@size: vairble that tells the amount needed in the heap
 *@c: variable with the new information
 *
 *Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc((sizeof(*p) * size) + 1);
	for (a = 0; a < size; a++)
	{
		p[a] = c;
	}
	p[a] = '\0';
	return (p);
}

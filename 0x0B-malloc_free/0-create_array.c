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
	unsigned int a = 0;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(*p) * size);
	while (a < size)
	{
		p[a] = c;
		a++;
	}
	p[a] = '\0';
	return (p);
}

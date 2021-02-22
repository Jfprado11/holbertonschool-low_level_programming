#include "holberton.h"

/**
 *_memcpy - fill memory with a constat byte
 *@dest: destinition of the data memory to be copied
 *@src: source of the memory
 *@n: copies the first bytes
 *
 *Return: a pointer with the value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

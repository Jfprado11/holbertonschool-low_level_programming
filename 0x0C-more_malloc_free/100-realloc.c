#include "holberton.h"
#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 *_realloc - allocates a new memory previous allocated
 *@ptr: the pointer to be new allocated
 *@old_size: the old size of the firs malloc
 *@new_size: the new size to be allocated
 *Return: a new memory allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	new_ptr = (void *)malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (new_ptr)
	{
		_memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}
	return (new_ptr);
}
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

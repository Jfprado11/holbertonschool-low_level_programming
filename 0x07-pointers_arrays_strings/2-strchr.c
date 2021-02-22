#include "holberton.h"

/**
 *_memcpy - fill memory with a constat byte
 *@dest: destinition of the data memory to be copied
 *@src: source of the memory
 *@n: copies the first bytes
 *
 *Return: a pointer with the value
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}

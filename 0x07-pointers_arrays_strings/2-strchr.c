#include "holberton.h"

/**
 *_strchr - fill memory with a constat byte
 *@s: string to be read
 *@c: letter to pe input
 *
 *Return: a pointer with the value
 */
char *_strchr(char *s, char c)
{
		for (; *s != '0'; s++)
		{
			if (*s == c)
			{
				return (s);
			}
		}
		return ('\0');
}

#include "holberton.h"
int cmp(char *x, char *y);
/**
 *_strstr - function locates a substring
 *@haystack: string to be compare
 *@needle: string to be compare
 *
 *Return: a pointer with the value
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == '\0' || needle == '\0')
	{
		return ('\0');
	}
	while (*haystack)
	{
		char *b = haystack;
		char *p = needle;

		while (*haystack && *p && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
		{
			return (b);
		}
		haystack = b + 1;
	}
	return ('\0');
}

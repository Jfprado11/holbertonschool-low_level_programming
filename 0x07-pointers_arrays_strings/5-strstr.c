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
	while (*haystack != '\0')
	{
		if (*haystack == *needle && cmp(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}

/**
*cmp - function to compare two strings
*@x: string to be compare
*@y: string to be compare
*
*Return: a pointer with the value
*/
int cmp(char *x, char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
		{
			return (0);
		}
		x++;
		y++;
	}
	return (*y == '\0');
}

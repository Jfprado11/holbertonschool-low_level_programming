#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char cp = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (cp = 'A'; cp <= 'Z'; cp++)
	{
		putchar(cp);
	}
	putchar('\n');
	return (0);
}

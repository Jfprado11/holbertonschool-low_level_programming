#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 0;
	char cp = 'a';

	for (ch = '1'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (cp = 'a'; cp <= 'f'; cp++)
	{
		putchar(cp);
	}
	putchar('\n');
	return (0);
}

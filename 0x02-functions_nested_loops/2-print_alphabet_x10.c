#include "holberton.h"

/**
 *print_alphabet_x10 - entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a;
	int x;

	for (x = 1; x <= 10; x++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

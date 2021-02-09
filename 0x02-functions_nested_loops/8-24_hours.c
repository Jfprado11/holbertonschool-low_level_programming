#include "holberton.h"

/**
 *print_last_digit - gives the absulute value of a number
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}

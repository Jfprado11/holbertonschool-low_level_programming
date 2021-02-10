#include "holberton.h"

/**
 *times_table - gives the absulute value of a number
 *
 * Return: nothing
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = b * a;
			if (c < 10)
			{
				if (b > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
}

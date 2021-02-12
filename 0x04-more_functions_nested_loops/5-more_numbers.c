#include "holberton.h"

/**
 *more_numbers - purnt the number for 0 to 14 by 10 times.
 *
 *Return: Nothing
 */
void more_numbers(void)
{
	int a;
	int x;

	for (a = 0; a <= 9; a++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + '0');
			}
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 *print_number - print a integer with puthcar
 *@n: varible that takes the number
 *
 *Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}

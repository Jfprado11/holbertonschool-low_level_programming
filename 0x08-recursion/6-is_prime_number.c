#include "holberton.h"

int _checks(int a, int b);
/**
 *is_prime_number - tells is the number is prime or not
 *@n: number to be found a prime or not
 *
 *Return: 1 if prime. 0 if not
 */
int is_prime_number(int n)
{
	int hey;

	if (n < 2)
	{
		return (0);
	}
	hey = _checks(n, n / 2);
	return (hey);
}
/**
 *_checks - calcule if a prime number
 *@a: varible complete
 *@b: half of the cariable
 *
 *Return: a varible telling if a prime number or not
 */
int _checks(int a, int b)
{
	if (b == 1)
	{
		return (1);
	}
	if (a % b == 0)
	{
		return (0);
	}
	return (_checks(a, b - 1));
}

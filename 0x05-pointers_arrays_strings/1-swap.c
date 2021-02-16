#include "holberton.h"

/**
 *swap_int - Tells if the characters are uppercase
 *@a: variable to swap a variable
 *@b: variable to swap the value of varible
 *
 *Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

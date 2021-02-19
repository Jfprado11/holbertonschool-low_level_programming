#include "holberton.h"

/**
 *reverse_array - rev a array
 *@a: varible to the array
 *@n: gives the size of the array
 *
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int l;
	int h;
	int aux;

	for (l = 0, h = n - 1; l < h; l++, h--)
	{
		aux = a[l];
		a[l] = a[h];
		a[h] = aux;
	}
}

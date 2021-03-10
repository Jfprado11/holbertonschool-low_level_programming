#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - pointer to a function to print name
 *@name: name to print
 *@f: pointer to pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0)
	{
		f(name);
	}
}
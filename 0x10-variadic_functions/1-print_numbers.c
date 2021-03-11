#include "variadic_functions.h"

/**
 *print_numbers - function that prints the int numbers
 *@separator: string going t=in the middle of num
 *@n: numebers of ag
 *
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a, b;
	va_list ag;

	va_start(ag, n);
	for (a = 0; a < n; a++)
	{
		b = va_arg(ag, int);
		if (a == n - 1)
		{
			printf("%d", b);
		}
		else
		{
			printf("%d", b);
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(ag);
}

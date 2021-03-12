#include "variadic_functions.h"

/**
 *print_strings - function that prints the int numbers
 *@separator: string going in the middle of num
 *@n: numebers of ag
 *
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *b;
	va_list ag;

	va_start(ag, n);
	for (a = 0; a < n; a++)
	{
		b = va_arg(ag, char *);
		if (b == NULL)
		{
			b = "(nil)";
		}
		if (a == n - 1)
		{
			printf("%s", b);
		}
		else
		{
			printf("%s", b);
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(ag);
}

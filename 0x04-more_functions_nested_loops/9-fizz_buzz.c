#include <stdio.h>

/**
 *main - fizz bizz table
 *
 *Return: 0 success
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		int b = a % 3;
		int c = a % 5;
		int d = a % 15;

		if (d == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (b == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (c == 0)
		{
			printf("Buzz");
			putchar(' ');
		}
		else
		{
			printf("%d", a);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

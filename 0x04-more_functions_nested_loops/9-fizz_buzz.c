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
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (a % 5 == 0)
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

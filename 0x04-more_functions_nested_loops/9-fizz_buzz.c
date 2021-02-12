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
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			if (a < 99)
			printf("Buzz ");
			else
				printf("Buzz");
		}
		else
		{
			printf("%d ", a);
		}
	}
	putchar('\n');
	return (0);
}

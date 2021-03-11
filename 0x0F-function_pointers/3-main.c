#include "3-calc.h"

/**
 *main - mian function to calcultes the result
 *@argc: the numbers of arguments
 *@argv: the arguments past of it
 *
 * Return: a integar with the operation
 */
int main(int argc, char *argv[])
{
	int toghr, n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if ((*argv[2] == '%' || *argv[2] == '/') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	toghr = get_op_func(argv[2])(n1, n2);
	printf("%d\n", toghr);
	return (0);
}

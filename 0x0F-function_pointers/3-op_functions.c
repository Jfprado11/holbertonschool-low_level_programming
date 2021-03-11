#include "3-calc.h"

/**
 *op_add - the sum of two int
 *@a: first number
 *@b:
 *
 *Return: the value of sum
 */
int op_add(int a, int b)
{
	int addition;

	addition = a + b;
	return (addition);
}

/**
 *op_sub - the rest of two int
 *@a: first number
 *@b: second number
 *
 *Return: the value of rest
 */
int op_sub(int a, int b)
{
	int r;

	r = a - b;
	return (r);
}

/**
 *op_mul - the multiplication of two int
 *@a: first number
 *@b: second number
 *
 *Return: the value of multiplicaion
 */
int op_mul(int a, int b)
{
	int m;

	m = a * b;
	return (m);
}

/**
 *op_div - the division of two int
 *@a: first number
 *@b: second number
 *
 *Return: the value of divison
 */
int op_div(int a, int b)
{
	int d;

	d = a / b;
	return (d);
}

/**
 *op_mod - the modular of two int
 *@a: first number
 *@b: second number
 *
 *Return: the module of the operation
 */
int op_mod(int a, int b)
{
	int mu;

	mu = a % b;
	return (mu);
}

#include "3-calc.h"

/**
 * op_add - Would add two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: add.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Would subctract two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: difference.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Would multiply two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: multiplication.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Would divide two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: division.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Would calculate the module of two numbers.
 * @a: first number.
 * @b: second number.
 *
 * Return: remainder of the division.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

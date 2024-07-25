#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of @a and @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: dividend
 * @b: divisor
 *
 * Return: the division of @a by @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder of the
 * division of two integers
 * @a: dividend
 * @b: divisor
 *
 * Return: the remainder of the divison
 * of @a by @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

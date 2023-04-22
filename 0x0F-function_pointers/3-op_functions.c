#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of n.
 * @a: The first n.
 * @b: The second n.
 *
 * Return: The sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference.
 * @a: The first n.
 * @b: The second n.
 *
 * Return: The difference .
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product 
 * @a: The first n.
 * @b: The second n.
 *
 * Return: The product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns the division.
 * @a: The first n.
 * @b: The second n.
 *
 * Return: The quotient.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder.
 * @a: The first n.
 * @b: The second n.
 *
 * Return: The remainder .
 */
int op_mod(int a, int b)
{
	return (a % b);
}

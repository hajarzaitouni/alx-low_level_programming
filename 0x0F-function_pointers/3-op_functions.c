#include "3-calc.h"

/**
 * op_add - computes the sum of two integers
 * @a: first input integer
 * @b: second input integer
 * Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the  difference of two integers
 * @a: first input integer
 * @b: second input integer
 * Return: returns the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first input integer
 * @b: second input integer
 * Return: returns the result of the multiplication of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divise two integers
 * @a: first input integer
 * @b: second input integer
 * Return: returns the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of two integers
 * @a: first input integer
 * @b: second input integer
 * Return: returns the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}

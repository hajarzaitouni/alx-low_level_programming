#include "main.h"

int square_rescursion(int n, int k);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer number to caluclate the square root of
 * Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square_rescursion(n, 0));
}

/**
 * square_rescursion - find the natural square root of a number
 * @n: integer number to caluclate the square root of
 * @k: the initial value to start from
 * Return: result of square root
 */

int square_rescursion(int n, int k)
{
	if (k * k > n)
		return (-1);
	else if (k * k == n)
		return (k);
	else
		return (square_rescursion(n, k + 1));
}

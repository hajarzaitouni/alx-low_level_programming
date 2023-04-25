#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: input of integer type
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
		
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - calcultes the sum of all its parameters
 * @n: the number of parameters
 * @...: all parameters to calculate the sum of
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ptr, const unsigned int);
	}

	va_end(ptr);
	return (sum);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, i;
	unsigned long fib1, fib2, fib3;

	n = 50;
	fib1 = 0;
	fib2 = 1;

	for (i = 0; i < n; i++)
	{
		fib3 = fib2 + fib1;
		printf("%lu", fib3);

		fib1 = fib2;
		fib2 = fib3;
		if (i != n - 1)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}

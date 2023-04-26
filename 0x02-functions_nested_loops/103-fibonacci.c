#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of the even-valued terms (<4000000)
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, i;
	unsigned long fib1, fib2, fib3;
	float sum;

	n = 50;
	fib1 = 0;
	fib2 = 1;
	for (i = 0; i < n; i++)
	{
		fib3 = fib2 + fib1;
		if (fib3 > 4000000)
			break;
		if ((fib3 % 2) == 0)
		{
			sum = sum + fib3;
		}
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%.0f\n", sum);

	return (0);
}

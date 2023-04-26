#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 1024, i, sum;

	sum = 0;

	for (i = 1; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("The sum of these multiples is %d\n", sum);

	return (0);
}

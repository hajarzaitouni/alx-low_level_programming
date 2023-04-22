#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit_n;

	digit_n = 0;
	while (digit_n <= 9)
	{
		printf("%d", digit_n);
		digit_n++;
	}
	putchar('\n');
	return (0);
}

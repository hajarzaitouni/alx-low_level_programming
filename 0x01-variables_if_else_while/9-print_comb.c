#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit_n = 0;

	while (digit_n <= 9)
	{
		putchar(48 + digit_n);
		if (digit_n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit_n++;
	}
	putchar('\n');

	return (0);
}

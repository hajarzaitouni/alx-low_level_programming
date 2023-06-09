#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit_1 = 0;
	int digit_2;

	while (digit_1 <= 9)
	{
		digit_2 = 0;
		while (digit_2 <= 9)
		{
			if (digit_1 != digit_2 && digit_1 < digit_2)
			{
				putchar(48 + digit_1);
				putchar(48 + digit_2);
				if ((digit_1 + digit_2) != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit_2++;
		}
		digit_1++;
	}
	putchar('\n');

	return (0);
}

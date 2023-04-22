#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f_digits = 0;
	int s_digits;

	while (f_digits <= 99)
	{
		s_digits = f_digits;
		while (s_digits <= 99)
		{
			if (f_digits != s_digits)
			{
				putchar((f_digits / 10) + 48);
				putchar((f_digits % 10) + 48);
				putchar(' ');
				putchar((s_digits / 10) + 48);
				putchar((s_digits % 10) + 48);
				if ((f_digits + s_digits) != 197)
				{
					putchar(',');
					putchar(' ');
				}
			}
			s_digits++;
		}
		f_digits++;
	}
	putchar('\n');

	return (0);
}

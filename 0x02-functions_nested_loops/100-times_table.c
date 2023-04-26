#include "main.h"

/**
 * print_times_table - prints the n times table except for n > 15 or n < 0
 *
 * @n: input
 *
 */

void print_times_table(int n)
{
	int i, j, mult;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				mult = i * j;
				_putchar(',');
				_putchar(' ');
				if (mult <= 9)
				{
					_putchar(' ');
				}
				if (mult <= 99)
				{
					_putchar(' ');
				}
				if (mult >= 100)
				{
					_putchar((mult / 100) + 48);
					_putchar(((mult / 10) % 10) + 48);
				}
				else if (mult <= 99 && mult >= 10)
					_putchar((mult / 10) + 48);
				_putchar((mult % 10) + 48);
			}
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			n = j;
			if (n > 9)
			{
				_putchar(49);
				n = j % 10;
			}
			_putchar(n + 48);
		}
		_putchar('\n');
	}
}

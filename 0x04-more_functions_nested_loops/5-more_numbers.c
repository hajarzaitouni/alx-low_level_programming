#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, j, k;

	/* i loops over the number of lines*/
	/* j loops over numbers from 0 to 9*/
	/* k loops over second digit of numbers from 10 to 14*/
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + 48);
		}
		for (k = 0; k < 5; k++)
		{
			_putchar(49);
			_putchar(k + 48);
		}
		_putchar('\n');
	}
}

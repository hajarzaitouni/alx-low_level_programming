#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int i, j;

	/* i loops over the number of lines*/
	/* j loops over numbers from 0 to 14*/
	for (i = 0; i < 10; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j);
		}
		for (j = 48; j < 53; j++)
		{
			_putchar(49);
			_putchar(j);
		}
		_putchar('\n');
	}
}

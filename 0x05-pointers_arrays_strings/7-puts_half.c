#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: string input parameter
 */

void puts_half(char *str)
{
	int i, n, counter = 0;

	for (i = 0; str[i] != '\0'; i++)
		counter++;
	n = counter / 2;

	if (counter % 2 != 0)
		n = (counter - 1) / 2;
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

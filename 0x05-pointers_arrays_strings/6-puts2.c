#include "main.h"

/**
 * puts2 - rints every other character of a string,
 * starting with the first character
 * example: if str = "0123456789", the result is "02468"
 * @str: string input parameter
 */

void puts2(char *str)
{
	int i, counter = 0;

	for (i = 0; str[i] != '\0'; i++)
		counter++;

	i = 0;
	while (i <= counter - 1)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}

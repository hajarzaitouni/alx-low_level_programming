#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: takes string input as parameter
 */

void print_rev(char *s)
{
	int i, j, counter;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (j = counter - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

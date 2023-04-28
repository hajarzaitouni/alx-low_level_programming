#include "main.h"

/**
 * print_number - prints an integer using _putchar function
 * @n: integer input
 */

void print_number(int n)
{
	unsigned int number = n;

	/*checks first if the number it's negative*/
	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}
	if ((number / 10) > 0)
	{
		print_number(number / 10);
	}
	_putchar((number % 10) + 48);
}

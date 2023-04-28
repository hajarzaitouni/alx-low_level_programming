#include "main.h"

/**
 * print_number - prints an integer using _putchar function
 * @n: integer input
 */

void print_number(int n)
{
	/*checks first if the number it's negative*/
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if ((n / 10) > 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + 48);
}

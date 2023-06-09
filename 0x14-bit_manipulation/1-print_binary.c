#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: unsigned long integer number
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	int bit = sizeof(n) * 8;

	for (i = bit - 1; i >= 0; i--)
	{
		if (n & (1L << i))
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (count == 0)
		_putchar('0');
}

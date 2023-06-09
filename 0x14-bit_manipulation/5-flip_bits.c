#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: first unsigned long integer
 * @m: second unsigned long integer
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit = sizeof(n) * 8;
	int i, count = 0;
	unsigned long int xorValue = n ^ m;

	for (i = bit - 1; i >= 0; i--)
	{
		if ((xorValue >> i) & 1)
			count++;
	}
		return (count);
}

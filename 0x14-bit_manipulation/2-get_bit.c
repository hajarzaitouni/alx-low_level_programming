#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: unsigned long integer input (parameter)
 * @index: the index of the bit
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > sizeof(n) * 8)
		return (-1);
	bit_value = ((n >> index) & 1);

	return (bit_value);
}

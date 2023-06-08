#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: a pointer to string
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci_num = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deci_num <<= 1;
		deci_num = deci_num + (b[i] - '0');
		i++;
	}
	return (deci_num);
}

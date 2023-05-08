#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: the adresse of memory to be filled
 * @b: Value to be filled
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}

	return (s);
}

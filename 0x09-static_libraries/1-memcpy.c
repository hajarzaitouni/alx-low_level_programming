#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to be filled
 * @src: memory area to copy from
 * @n: bytes from memory area src
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

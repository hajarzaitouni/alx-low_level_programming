#include "main.h"
#include <stdlib.h>

char *_memset(char *s, char c, unsigned int n);

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: a pointer to the allocated memory;
 * if malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(nmemb * size);
	if (str == 0)
		return (NULL);
	_memset(str, 0, nmemb * size);

	return (str);
}

/**
 * *_memset - fills memory with a constant byte
 * @s: a pointer to string
 * @c: the character to copy
 * @n: number of times to copy c
 * Return: a pointer to the memory area s
 */


char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}

	return (s);
}

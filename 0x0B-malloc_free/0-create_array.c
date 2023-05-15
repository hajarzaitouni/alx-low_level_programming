#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: the size of array
 * @c: a character
 * Return: a pointer to array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}

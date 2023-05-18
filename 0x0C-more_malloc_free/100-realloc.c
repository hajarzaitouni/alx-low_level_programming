#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));

	new_ptr = malloc(new_size);

	if (new_ptr == 0)
		return (NULL);
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			*(new_ptr + i) = *((char *)ptr + i);
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			*(new_ptr + i) = *((char *)ptr + i);
	}
	free(ptr);

	return (new_ptr);
}

#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: a pointer to array of integers
 * @size: the size of the array
 * @action: a pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == 0 || action == 0)
		return;
	while (i < size)
	{
		action(*(array + i));
		i++;
	}
}

#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: a pointer to array of integers
 * @size: array's size
 * @cmp: a pointer to function to be used to compare values
 * Return: index of the first element
 *	for which the cmp function does not return 0
 *	and -1, if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == 0 || cmp == 0 || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(*(array + i)) != 0)
			return (i);
		i++;
	}

	return (-1);
}

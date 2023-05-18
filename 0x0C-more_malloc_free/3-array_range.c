#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *	the array should contains values from min (included) to max (included)
 *	ordered from min to max
 * @min: minimum/starting integer
 * @max: maximum integer
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == 0)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}

	return (arr);
}

#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of int
 *		using the Binary search algorithm
 *
 * @array: array of integers
 * @size: the size of the array
 * @value: the search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;
	size_t i = 0;

	left = 0;
	right = size - 1;
	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

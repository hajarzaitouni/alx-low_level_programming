#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of int
 *		using the Jump search algorithm
 *
 * @array: array of integers
 * @size: the size of the array
 * @value: the value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left, right, jump;

	if (array == NULL || size == 0)
		return (-1);
	jump = sqrt(size);
	left = right = 0;
	while (array[right] < value && right < size)
	{
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	right = right < size - 1 ? right : size - 1;
	for (; left < right && array[left] < value; left++)
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
	if (left <= right)
		printf("Value checked array[%ld] = [%d]\n", left, array[left]);
	return (array[left] == value ? (int)left : -1);
}

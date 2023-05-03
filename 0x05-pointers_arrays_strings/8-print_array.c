#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: a pointer to integer
 * @n: size of the array
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= (n - 1); i++)
		{
			printf("%d", a[i]);
			if (i != (n - 1))
				printf(", ");
			else
				printf("\n");
		}
	}
}

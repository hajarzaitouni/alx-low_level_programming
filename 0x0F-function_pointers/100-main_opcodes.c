#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints the opcodes of its own main function
 *
 * @argc: number of arguments
 * @argv: a pointer to array
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0, n_bytes;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (i < n_bytes)
	{
		if (i == (n_bytes - 1))
		{
			printf("%02hhx\n", *(ptr + i));
			break;
		}
		printf("%02hhx ", *(ptr + i));
		i++;
	}

	return (0);
}

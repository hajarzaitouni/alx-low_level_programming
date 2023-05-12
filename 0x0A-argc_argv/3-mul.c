#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: print Error if he program does not receive two arguments, return 1
 * and the result o multiplication if not
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

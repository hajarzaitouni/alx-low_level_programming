#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: performs simple operations
 *	Ex: +: addition, -: subtraction, *: multiplication ...
 * @argc: numbers of arguments
 * @argv: a pointer to array
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*func_oper)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func_oper = get_op_func(argv[2]);

	if (func_oper == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' && num2 == 0) || (argv[2][0] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func_oper(num1, num2));

	return (0);
}

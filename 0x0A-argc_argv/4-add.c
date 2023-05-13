#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int check_isdigit(char *s);
/**
 * main - Entry point
 * Description: adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum;

	i = 1;
	sum = 0;

	while (i < argc)
	{
		if (check_isdigit(argv[i]))
		{
			sum = sum + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * check_isdigit - check if there are digits
 * @s: a pointer to string
 * Return: 0 (Success)
 */


int check_isdigit(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		if (!isdigit(s[count]))
			return (0);
		count++;
	}
	return (1);
}

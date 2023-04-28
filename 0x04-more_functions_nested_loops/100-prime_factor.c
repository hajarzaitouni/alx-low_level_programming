#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Description: prints the largest prime factor of the number 612852475143
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int number;
	int i, largest_fact;

	number = 612852475143;

	while (number % 2 == 0)
	{
		largest_fact = 2;
		number = number / 2;
	}
	for (i = 3; i <= (sqrt(number)); i = i + 2)
	{
		while (number % i == 0)
		{
			largest_fact = i;
			number = number / i;
		}
	}
	if (number > 2)
	{
		largest_fact = number;
	}
	printf("%d\n", largest_fact);

	return (0);
}

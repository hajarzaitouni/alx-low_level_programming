#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of string
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{

		int money, cents = 0, i;
		int coins[] = {25, 10, 5, 2, 1};

		money = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			if (money >= coins[i])
			{
				cents = cents + (money / coins[i]);
				money = money % coins[i];
				if (money % coins[i] == 0)
					break;
			}
		}
		printf("%d\n", cents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}

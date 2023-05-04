#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: a program that generates random valid passwords
 * for the program 101-crackme
 * Return: 0 (Success)
 */

int main(void)
{
	int sum = 0;
	char r;

	srand(time(NULL));

	while (sum < (2772 - 127))
	{
		r = rand() % 128;
		sum = sum + r;
		putchar(r);
	}
	putchar(2772 - sum);
	return (0);
}

#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i = 0; /* i is the counter index */

	while (i < 8)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');

	return (0);
}

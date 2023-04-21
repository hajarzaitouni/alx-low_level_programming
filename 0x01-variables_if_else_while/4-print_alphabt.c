#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all alphabet except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
		}
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

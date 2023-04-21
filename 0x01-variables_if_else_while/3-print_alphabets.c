#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*prints from a-z */
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	/*prints from A-Z */
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input parameter
 */

void rev_string(char *s)
{
	int i, counter = 0;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (i = 0; i <= counter - 1; i++)
	{
		tmp = s[i];
		s[i] = s[counter - 1];
		s[counter - 1] = tmp;
		counter--;
	}
}


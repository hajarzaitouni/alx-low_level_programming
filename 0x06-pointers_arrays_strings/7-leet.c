#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: a pointer string
 * Return: string
 */

char *leet(char *s)
{
	char str_i[] = {'a', 'e', 'o', 't', 'l'};
	char str_f[] = {4, 3, 0, 7, 1};
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == str_i[j] || s[i] == str_i[j] - 32)
			{
				s[i] = str_f[j] + 48;
			}
		}
		i++;
	}

	return (s);
}

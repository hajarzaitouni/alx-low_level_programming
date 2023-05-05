#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: a pointer string
 * Return: encoded string
 */

char *rot13(char *s)
{
	char input_s[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char output_s[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == input_s[j])
			{
				s[i] = output_s[j];
				break;
			}
		}
		i++;
	}

	return (s);
}

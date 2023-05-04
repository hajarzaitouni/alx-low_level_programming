#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @s: pointer string
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
		if (s[i] == ' ' || s[i] == '.' || s[i] == '\t' || s[i] == '\n'
			|| s[i] == '!' || s[i] == '?' || s[i] == ';' || s[i] == ','
			|| s[i] == '(' || s[i] == ')'
			|| s[i] == '"' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
				continue;
			}
		}
	}

	return (s);
}

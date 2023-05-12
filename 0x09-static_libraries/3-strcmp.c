#include "main.h"

/**
 * _strcmp - compares two strings and work exactly like strcmp
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: Return 0 if correct and != 0 if false
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, result;

	result = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		i++;
	}
	result = s1[i] - s2[i];

	return (result);
}

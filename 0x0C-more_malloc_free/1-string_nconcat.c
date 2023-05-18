#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings using malloc
 * @s1: a pointer to string (first parameter)
 * @s2: a pointer to string second parameter)
 * @n: number of bytes from s2
 * Return: a pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_s1, len_s2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = len_s2 = 0;

	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;
	if (n < len_s2)
		str = malloc(sizeof(char) * (len_s1 + n + 1));
	else
		str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	if (str == 0)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (n < len_s2 && i < (len_s1 + n))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	while (n >= len_s2 && i < (len_s1 + len_s2))
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

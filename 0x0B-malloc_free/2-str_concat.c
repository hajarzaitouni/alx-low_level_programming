#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings to a newly allocated space in memory
 * @s1: a pointer to string (first parameter)
 * @s2: a pointer to string (second parameter)
 * Return: a pointer to newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *cat_str;
	int i, count1, count2;

	count1 = count2 = 0;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	while (s1[count1] != '\0')
		count1++;
	while (s2[count2] != '\0')
		count2++;
	cat_str = malloc(sizeof(char) * (count1 + count2 + 1));

	if (cat_str == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		cat_str[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
	{
		cat_str[count1] = s2[i];
		count1++;
	}
	return (cat_str);
}

#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: first input parameter
 * @src: second input parameter
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len_counter;

	len_counter = 0;
	i = 0;

	while (dest[i] != '\0')
	{
		len_counter++;
		i++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len_counter] = src[i];
		len_counter++;
	}

	return (dest);
}

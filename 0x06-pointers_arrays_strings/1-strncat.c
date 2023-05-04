#include "main.h"

/**
 * *_strncat - concatenates two strings
 * it uses at most n bytes from src
 * @dest: first input parameter
 * @src: second input parameter
 * @n: number of bytes from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len_counter;

	len_counter = 0;
	i = 0;

	while (dest[i] != '\0')
	{
		len_counter++;
		i++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_counter] = src[i];
		len_counter++;
	}

	return (dest);
}

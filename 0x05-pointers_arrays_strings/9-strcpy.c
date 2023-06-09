#include "main.h"

/**
 * *_strcpy - copies the string
 * @dest: first string parameter
 * @src: second string parameter
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, counter = 0;

	for (i = 0; src[i] != '\0'; i++)
		counter++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[counter] = '\0';

	return (dest);
}

#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a new string
 * which is a duplicate of the string given as parameter
 * @str: a pointer to string
 * Return: returns a pointer to string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, count;

	i = 0;
	count = 0;

	if (str == 0)
		return (NULL);
	while (str[count] != '\0')
		count++;
	ptr = malloc(sizeof(char) * (count + 1));
	if (ptr == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}

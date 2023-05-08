#include "main.h"

/**
 * _strstr - locates a substring;
 * finds the first occurrence of the substring needle in the string haystack
 * @haystack: string to be examined
 * @needle: substring to be searched in haystack string
 * Return: a pointer to the beginning of the located substring
 *	or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *p, *pp;

	while (*haystack != '\0')
	{
		p = haystack;
		pp = needle;
		while (*p == *pp && *pp != '\0')
		{
			p++;
			pp++;
		}
		if (*pp == '\0')
			return (haystack);
		haystack++;
	}

	return (0);
}

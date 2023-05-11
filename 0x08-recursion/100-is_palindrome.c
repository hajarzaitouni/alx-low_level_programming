#include "main.h"

int check_palindrome_recursive(char *s, int i, int last);
int _strlen_recursion(char *s);

/**
 * is_palindrome - check a string if palindrome or not
 * @s: a pointer to string
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (check_palindrome_recursive(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - calculate the length of a string
 * @s: a pointer to string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome_recursive - check recursively if string is palindrome
 * @s: a pointer to string
 * @i: iterator at the biginning of a string
 * @last: iterator at the end of a string
 * Return: 1 if palindrome and 0 if not
 */

int check_palindrome_recursive(char *s, int i, int last)
{
	if (s[i] != s[last - 1])
		return (0);
	if (i >= last)
		return (1);
	return (check_palindrome_recursive(s, i + 1, last - 1));
}

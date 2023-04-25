#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: input number of integer type
 *
 * Return: Always 0 (success)
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n > 0)
		last_digit = n % 10;
	else
		last_digit = -1 * (n % 10);
	_putchar(48 + last_digit);
	return (last_digit);
}

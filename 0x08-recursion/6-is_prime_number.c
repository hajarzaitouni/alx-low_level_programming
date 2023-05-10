#include "main.h"

int check_is_prime(int n, int k);

/**
 * is_prime_number - affirms if a number is a prime number or not
 * @n: the number to check
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_is_prime(n, 2));
}

/**
 * check_is_prime - verify if the number is prime or not recursivly
 * @n: number to check
 * @k: iterator
 * Return: 1 if is prime, else not
 */

int check_is_prime(int n, int k)
{
	if (n == k)
		return (1);
	if (n % k == 0)
		return (0);
	return (check_is_prime(n, k + 1));
}

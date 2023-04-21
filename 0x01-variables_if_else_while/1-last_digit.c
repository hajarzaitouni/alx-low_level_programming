#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: last digit of a number
 *
 * Return: Always 0 (Successs)
 */

int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	r = n % 10;
	if (r > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	else if (r == 0)
		printf("Last digit of %d is %d and is 0\n", n, r);
	else if (r < 6 && r != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	return (0);
}

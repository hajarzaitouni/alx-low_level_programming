#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A c program that prints a string unsing write function
 *
 * Return: 1 (fail)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase 
 * 			using _putchar function
 */

void print_alphabet_x10(void)
{
	int line, i;

	for (line = 0; line < 10; line++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

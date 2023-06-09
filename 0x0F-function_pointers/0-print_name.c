#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: a pointer to string
 * @f: a pointer to function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		return;
	f(name);
}

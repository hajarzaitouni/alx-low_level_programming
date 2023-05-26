#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 *
 * @format:  is a list of types of arguments passed to the function
 *	Ex: s for string, i for integer, ...
 * @...: the list of parameters to print
 */

void print_all(const char * const format, ...)
{
	char *str, *separator = "";
	int i = 0;
	va_list ptr;

	va_start(ptr, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ptr, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ptr, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ptr, double));
					break;
				case 's':
					str = va_arg(ptr, char *);
					if (str == NULL)
						printf("(nil)");
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
		printf("\n");
		va_end(ptr);
	}
}

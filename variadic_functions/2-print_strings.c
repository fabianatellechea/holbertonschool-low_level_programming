#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: string to print
 * @n: number of int
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list p;
	char *s;

	va_start(p, n);

	while (i < n)
	{
		s = va_arg(p, char*);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", s);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");

	va_end(p);
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: string to print
 * @n: number of int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list p;

	va_start(p, n);

	while (i < n)
	{
		printf("%d", va_arg(p, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");

	va_end(p);
}

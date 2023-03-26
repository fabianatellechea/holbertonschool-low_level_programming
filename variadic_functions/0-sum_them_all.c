#include "variadic_functions.h"
#include <stdarg.h>

/**
  *sum_them_all - function that returns the sum of all its parameters
  *@n: const un int n
  *Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int sum = 0, i = 0;

	va_start(p, n);

	while (i < n)
	{
		sum += va_arg(p, int);
		i++;
	}

	va_end(p);

	return (sum);
}

#include "variadic_functions.h"

/**
  *sum_them_all -  function that returns the sum of all its parameters
  *@n: n
  *Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	int sum = 0, i = 0;

	va_start(op, n);

	if (n == 0)
	{
		return (0);
	}

	while (i < (int)n)
	{
		sum += va_arg(op, int);
		i++;
	}

	va_end(op);

	return (sum);
}


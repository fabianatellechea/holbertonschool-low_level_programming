#include "main.h"

/**
 *func - function
 *@n: int
 *@i: int
 *
 *Return: 0
 */

int func(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if ((n % i) == 0)
		return (0);
	else
		return (func(n, i - 1));
}

/**
 *is_prime_number - function
 *@n: int
 *
 *Return: 0
 */

int is_prime_number(int n)
{
	if (n > 1)
		return (func(n, n - 1));
	else if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (1);
}

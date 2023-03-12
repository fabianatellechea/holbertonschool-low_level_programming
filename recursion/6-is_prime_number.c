#include "main.h"
/**
 * prime_num - prime num
 * @i: i
 * @j: j
 * Return: prime num
 */

int prime_num(int i, int j)
{
	if (i % j == 0 && i < j)
	{
		return (0);
	}
	else if (i == j)
	{
		return (1);
	}
	else
	{
		return (prime_num(i, j + 1));
	}
}

/**
 * is_prime_number - checks for prime number
 * @n: n
 * Return: 1
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}

	return (prime_num(n, 2));
}

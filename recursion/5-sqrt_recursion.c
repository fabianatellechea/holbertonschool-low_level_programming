#include "main.h"
/**
 * root - calculates the natural square root of a number
 * @i: i
 * @n: n
 * Return: 0
 */

int root(int i, int n)
{
	if ((i * i) == n)
	{
		return (i);
	}
	if ((i * i) < n)
	{
		return (root(i + 1, n));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the square root
 * @n: int
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (root(1, n));
	}
}

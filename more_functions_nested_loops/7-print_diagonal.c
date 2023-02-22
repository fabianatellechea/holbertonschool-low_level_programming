#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: /
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(47);

		if (n <= 0)
		{
			_putchar('\n');
		}
	_putchar('\n');
	}
	_putchar('\n');
}

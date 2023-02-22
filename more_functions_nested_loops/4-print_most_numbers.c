#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - function that prints most numbers
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 || i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

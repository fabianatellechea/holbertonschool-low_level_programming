#include "main.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

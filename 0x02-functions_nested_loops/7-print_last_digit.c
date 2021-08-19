#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @v: int.
 * Return: value of last digit.
 */

int print_last_digit(int v)
{
	int ld = v % 10;

	if (v > 0)
	{
		_putchar(ld + '0');
		return (ld);
	}

	else if (v == 0)
	{
		_putchar(v + '0');
		return (v);
	}
	_putchar((ld * (-1)) + '0');
	return (ld * (-1));
}

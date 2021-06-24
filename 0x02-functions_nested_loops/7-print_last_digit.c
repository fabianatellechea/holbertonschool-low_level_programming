#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @v: int.
 * Return: value of last digit.
 */

int print_last_digit(int v)
{
	int ld = v % 10;

	if (ld < 0)
	ld *= -1;

	_putchar(ld + '0');

return (ld);
}

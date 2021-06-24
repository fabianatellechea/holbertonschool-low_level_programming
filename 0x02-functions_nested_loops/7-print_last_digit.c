#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @v: int.
 * Return: value of last digit.
 */

int print_last_digit(int v)
{
	if (v % 10 > 0)
	{
	_putchar(v % 10 + '0');
	}	
	 return (v % 10);
}

#include "holberton.h"
/**
  *print_most_numbers - function that prints the numbers, from 0 to 9
  *
  *Return: 0
  */

void print_most_numbers(void)
{
	int i;

	if (i <= 9)
	{
		if (i != 2 || i != 4)
		{
			_putchar (i);
		}
		i++;
	}
	_putchar ('\n');
}


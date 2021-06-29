#include "holberton.h"
/**
  *print_rev - prints a string, in reverse.
  *@s: char
  *Return: 0.
  */

void print_rev(char *s)
{
	int i;

		for (i = 0; str[i] != '\0'; i++)
		{
		i--;
			_putchar (str[i]);
		}
		_putchar ('\n');
}

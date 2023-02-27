#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: char
 * Return: 0
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		;
	}
	for (i = i - 1; s[i]; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}

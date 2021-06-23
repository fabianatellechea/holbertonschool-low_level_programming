#include "holberton.h"
/**
 *print_alphabet - prints the alphabet lowercase.
 *
 *Return: 0.
 */

print_alphabet(void)
{ char c;

	for (c = 'a'; c <= 'z'; c++)
	{	_putchar (c); }
			_putchar ('\n');
}

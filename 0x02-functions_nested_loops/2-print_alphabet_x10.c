#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times.
 *
 * Return: 0.
 */
void print_alphabet_x10(void)
{ char c;
	int n = 0;

for (c = 'a' ; c <= 'z' ; c++)
while (n < 10)
	_putchar(c);
_putchar('\n'); }


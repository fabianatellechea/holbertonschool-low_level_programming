#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i]; i++)
	{
		;
	}

	for (n = (i - 1) / 2 + 1; str[n]; n++)
	{
		_putchar(str[n]);
	}
	_putchar(10);

}

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
	for (i = i / 2; str[i]; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			n = (n - 1) / 2;
			_putchar(str[i]);
		}
	}
	_putchar(10);
}

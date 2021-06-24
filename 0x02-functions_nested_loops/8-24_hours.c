#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * Return: 0.
 */
void jack_bauer(void)
{ int h = 0, m;

	while (h < 24, h++)
	{ int m = 0;
		while (m < 60, m++)
		{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((m / 10) + '0');
		_putchar((m % 10) + '0');
		_putchar('\n');
		}
	}

}


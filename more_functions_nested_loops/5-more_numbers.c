#include "main.h"
#include <stdio.h>
/**
 * more_numbers - function that prints 0-14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	int t;

	for (t = 0; t <= 9; t++)
	{
		for (i = 0; i <= 14; i++)
		{

			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}

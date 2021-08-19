#include "main.h"
/**
  *times_table - function that prints the 9 times table
  *Return: 0
  */

void times_table(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			int r = n * m;

			if (r >= 10)
			{
				_putchar((r / 10) + '0');
			}

		if (r < 10 && m > 0)
		{
			_putchar(' ');
		}
			_putchar((r % 10) + '0');

		if (m < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
	_putchar('\n');
	}
}

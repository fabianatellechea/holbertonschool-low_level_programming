#include "main.h"
#include <stdio.h>
/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > (i + 1); j--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar ('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


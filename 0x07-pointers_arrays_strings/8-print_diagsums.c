#include "holberton.h"
#include <stdio.h>
/**
  *print_diagsums - function that prints the sum of the two diagonals
  *@a: a
  *@size: size
  *Return: 0
  */

void print_diagsums(int *a, int size)
{
	int b, c, d;

	b = 0;
	c = 0;
	d = size * size;
	while (b < d)
	{
		if (b % (size + 1) == 0)
			c += a[b];
		b++;
	}
	printf("%d, ", c);

	c = 0;
	b = 0;
	while (b < d)
	{
		if (b % (size - 1) == 0 && b != (d - 1) && b != 0)
			c += a[b];
		b++;
	}
	printf("%d\n", c);
}

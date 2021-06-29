#include "holberton.h"
/**
  * swap_int - swaps the values of two integers.
  *@a: int1
  *@b: int2
  * Return: 0.
  */

void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}

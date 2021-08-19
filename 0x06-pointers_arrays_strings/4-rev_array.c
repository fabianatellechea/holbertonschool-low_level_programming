#include "holberton.h"
/**
  *reverse_array - reverses the content of an array of integers
  *@a: int1
  *@n: int2
  *Return: 0.
  */

void reverse_array(int *a, int n)
{
	int b;
	int c = 0;


	for (b = 0; b < (n / 2); b++)
	{
		c = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = c;
	}

}


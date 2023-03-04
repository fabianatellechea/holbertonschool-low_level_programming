#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a: pointer
 * @n: int
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%i, ", a[i]);
	}

	printf("%i", a[i]);
	printf("\n");
}

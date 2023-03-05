#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: int
 * @a: pointer
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;

	for (; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}

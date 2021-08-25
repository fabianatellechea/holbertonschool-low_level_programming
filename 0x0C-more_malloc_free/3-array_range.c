#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* array_range - function
 * @min: min
 * @max: max
 * Return: a
 */
int *array_range(int min, int max)
{
	int *a;
	int i = 0;
int j;

	j = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * j);
	if (a == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		a[i] = min++;
i++;
	}
	return (a);
}

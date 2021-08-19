#include "main.h"
#include <stdio.h>

/**
*print_to_98 - function that prints all natural numbers from n to 98
*@n: int
*/

void print_to_98(int n)
{
	int j = n;

	while (j != 98)
	{
		printf("%d", j);
		putchar(',');
		putchar(' ');

	if (n > 98)
		j--;
	else
		j++;
	}
	printf("98\n");
}

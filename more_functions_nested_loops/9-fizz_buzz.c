#include "main.h"
#include <stdio.h>
/**
 * main - main function
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3))
			printf("Fizz");
		if (!(i % 5))
			printf("Buzz");
		else if ((i % 3) && (i % 5))
			printf("%d", i);
		if (i < 100)
			printf(" ");
			}
	printf("\n");
	return (0);
}

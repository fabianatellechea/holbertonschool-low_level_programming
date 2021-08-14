#include "stdio.h"
/**
  *main - Fizz Buzz
  *Return: 0
  */

int main(void)
{
	int i;

	for (i > 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%i", a);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

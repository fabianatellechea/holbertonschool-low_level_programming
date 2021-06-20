#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints variables with last digits.
 *
 * Return: 0.
 */

int main(void)
{ int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{ printf("Last digit of n is %i and is greater than 5\n", (n % 10));
}

	
	
	
	return (0);}

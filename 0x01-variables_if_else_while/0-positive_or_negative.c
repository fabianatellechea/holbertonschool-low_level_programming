#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - prints if the number is positive, negative or zero.
*
*Return: 0.
*/

int main(void)
{ int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

		If(n > 0)

{ Printf(“ % i is positive\n");
}

Else if (n = 0)

{ Printf(“ % i is zero\n”);
}

Else
{ printf(" % i is negative\n")
}
		return (0);

	}



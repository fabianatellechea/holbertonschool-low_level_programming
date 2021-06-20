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
{Printf(“%d is positive\n", n);
}

Else if (n = 0)
{Printf(“%d is zero\n”, n);
}

Else
{printf("%d is negative\n", n)
}
return (0);

}



#include <stdio.h>
/**
 * main - print comb
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);

		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
}

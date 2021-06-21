#include <stdio.h>
/**
 * main - prints a string of numbers separated by , and space.
 *
 * Return: 0.
 */

int main(void)
{ int n;
	for (n = '0'; n <= '9'; n++)
	{ putchar (n);

		if (n < '9')
{
			putchar (',');
			putchar (' ');
		}
}
	putchar ('\n');

	return (0); }

#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	for (c = 65; c <= 90; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Print all the letters except q and e
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		if (c != 113 && c != 101)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

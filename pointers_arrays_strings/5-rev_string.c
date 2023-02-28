#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: char
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char c;

	while (s[j + 1])
	{
		j++;
	}
	for (; i <= j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

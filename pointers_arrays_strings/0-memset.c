#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to char
 * @b: char
 * @n: unsigned int
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

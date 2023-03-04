#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenate strings
 * @dest: string
 * @src: string
 * @n: int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; dest[i]; i++)
	{
		;
	}

	for (; src[j] && j < n; j++, i++)
	{
		dest[i] = src[j];
	}

	return (dest);
}


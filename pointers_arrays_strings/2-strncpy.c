#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: string
 * @src: string
 * @n: int
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}

	if (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}

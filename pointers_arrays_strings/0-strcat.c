#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: string
 * @src: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[i]; i++)
	{
		;
	}
	for (; src[j]; j++)
	{
		dest[i] = src[j];
		i++;

	}
	return (dest);
}

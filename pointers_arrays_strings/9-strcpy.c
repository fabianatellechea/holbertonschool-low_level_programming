#include "main.h"
#include <stddef.h>
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: copy string
 * @src: string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}

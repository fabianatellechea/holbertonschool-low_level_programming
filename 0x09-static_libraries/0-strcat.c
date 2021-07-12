#include "holberton.h"
/**
  * *_strcat - concatenates two strings
  * @dest: - char1
  * @src: - char2
  *Return: a pointer to the resulting string dest.
  */
char *_strcat(char *dest, char *src)
{
	int d, s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}

	s = 0;

	while (src[s] != '\0')

	{	dest[d] = src[s];
		d++;
		s++;
		dest[d] = '\0';
	}

	return (dest);
}


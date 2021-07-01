#include "holberton.h"
/**
  *_strncat -  concatenates a string at the end of the other.
  *@dest: char1
  *@src: char2
  *@n: int
  *Return: a pointer to the resulting string dest.
  */

char *_strncat(char *dest, char *src, int n)
{
	int d, s;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}

	s = 0;
	while (src[s] != '\0' && s < n)
	{
		dest[d + s] = src[s];
	s++;
	dest[d + s] = '\0';
}
	return (dest);

}

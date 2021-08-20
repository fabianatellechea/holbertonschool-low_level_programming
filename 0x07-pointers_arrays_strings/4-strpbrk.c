#include "holberton.h"
/**
  *_strpbrk - function that searches a string for any of a set of bytes
  *@s: char
  *@accept: char2
  *Return: pointer to the byte in s
  */

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;

	while (s[a] != '\0')
	{
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
			b++;
		}
		a++;
	}
	return (0);
}

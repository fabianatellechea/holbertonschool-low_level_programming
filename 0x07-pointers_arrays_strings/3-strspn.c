#include "holberton.h"
/**
  *_strspn - function that gets the length of a prefix substring
  *@s: char
  *@accept: char2
  *Return: number of bytes in the initial segment of s
  */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b;
	int c = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				c++;
			}

			b++;
		}

		a++;
	}
	return (c);
}

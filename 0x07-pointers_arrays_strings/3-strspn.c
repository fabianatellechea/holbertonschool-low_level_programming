#include "holberton.h"
/**
  *_strspn - function that gets the length of a prefix substring
  *@s: char
  *@accept: char2
  *Return: number of bytes in the initial segment of s
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int c = 0;

	while (s[a] != '\0' && s[a] != ' ')
	{
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				c += 1;
			}
			b++;
		}
		a++;
	}
	return (c);
}



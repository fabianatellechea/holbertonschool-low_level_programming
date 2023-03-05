#include "main.h"
/**
  *_strspn - function that gets the length of a prefix substring
  *@s: char
  *@accept: char
  *Return: number of bytes in the initial segment of s
  */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b;
	unsigned int c = 0;

	while (s[a])
	{
		b = 0;
		while (accept[b])
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

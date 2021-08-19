#include "holberton.h"
/**
  *leet -  function that encodes a string into 1337
  *@s: string
  *Return: s
  */

char *leet(char *s)
{
	int i, a;
	int src[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int des[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != 0; i++)
	{
		for (a = 0; a < 10; a++)
		{
			if (s[i] == src[a])
				s[i] = des[a];
		}
	}
	return (s);
}

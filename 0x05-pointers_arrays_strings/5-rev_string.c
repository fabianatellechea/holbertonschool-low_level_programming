#include "holberton.h"
/**
  *rev_string - reverses a string
  *
  */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int c;

	while (s[a] != '\0')
	{
		a++;
	}
		a--;

	while (a > b)
	{
		c = s[a];
		s[a--] = s[b];
		s[b++] = c;
	}

}

#include "main.h"
/**
  *_memset: function that fills memory with a constant byte
  *@s: char1
  *@b: char2
  *@n: unsigned int
  *Return:  a pointer to the memory area s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] && i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "holberton.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars
  *@size: int
  *@c: char
  *Return: 0.
  */

char *create_array(unsigned int size, char c)
{
	char *p = NULL;
	unsigned int i;

	if (size > 0)
	{
		*p = malloc;

	if (p)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
	}
	}

	return (p);
}





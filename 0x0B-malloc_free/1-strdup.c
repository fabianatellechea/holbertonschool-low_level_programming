#include "holberton.h"
#include <stdlib.h>

/**
  *_strdup - copy of the string given as a parameter.
  *@str: char
  *Return: a pointer to a newly allocated space in memory.
  */

char *_strdup(char *str)
{
	char *p = NULL;
	int i;
	int length;

	for (length = 0; *(str+length) != '\0'; length++)
		;
	p = malloc(sizeof(char) * length + 1);

	if (p)
	{
		for (i = 0; i < length; i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
}

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

	for (length = 0; *

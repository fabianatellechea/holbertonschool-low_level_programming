#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
  *malloc_checked - function that allocates memory using malloc
  *@b: unsigned int
  *Return: pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(b));
	if (p == NULL)
		exit(98);

	return (p);
}

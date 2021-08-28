#include "main.h"
/**
  *flip_bits - flip bits
  *@n: n
  *@m: m
  *Return: j
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int j = 0;

	i = n ^ m;

	while (i != 0)
	{
		j += i & 1;
		i = i >> 1;
	}
	return (j);
}

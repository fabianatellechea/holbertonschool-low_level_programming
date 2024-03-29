#include "main.h"
/**
 *flip_bits - returns the number of bits you would need to flip
 *@n: number
 *@m: number
 *Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int count = 0;

	while (res)
	{
		count++;
		res &= (res - 1);
	}

	return (count);
}

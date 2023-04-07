#include "main.h"
/**
 *get_bit - function that returns the value of a bit at index
 *@n: number
 *@index: position
 *Return: value of a bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 1 << index;

	if (index > 63)
	{
		return (-1);
	}

	if ((n & bit) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

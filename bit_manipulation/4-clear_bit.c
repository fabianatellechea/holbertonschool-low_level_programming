#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0 at a index
 *@n: number
 *@index: position
 *Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1 << index;

	if (index > 63)
	{
		return (-1);
	}

	*n &= ~bit;

	return (1);
}

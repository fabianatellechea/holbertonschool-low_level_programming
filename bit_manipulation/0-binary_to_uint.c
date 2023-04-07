#include "main.h"
#include <stddef.h>

/**
 *binary_to_uint - function that converts a binary number
 *@b: is pointing to a string of 0 and 1 chars
 *Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			uint <<= 1;
			uint += (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (uint);
}

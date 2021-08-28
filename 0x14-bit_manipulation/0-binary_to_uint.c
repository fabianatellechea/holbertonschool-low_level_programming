#include "main.h"
#include <stddef.h>
/**
 *binary_to_uint - function that converts a binary number
 *@b: is pointing to a string of 0 and 1 chars
  *Return: the converted number, or 0
  */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int ui = 0;

	if (b == NULL)
	return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		ui <<= 1;
		ui += b[i] - '0';
		i++;
	}
	return (ui);
}

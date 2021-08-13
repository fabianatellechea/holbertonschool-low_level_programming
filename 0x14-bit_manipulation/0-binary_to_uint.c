#include "main.h"

/**
  *unsigned int binary_to_uint - function that converts a binary number to an unsigned int
  *@b: is pointing to a string of 0 and 1 chars
  *Return: the converted number, or 0 if
  there is one or more chars in the string b that is not 0 or 1
  */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int ui = 0;

	if (b)
	{
		for (i = 0; b[i] != '\0'; i++)

		if (b[i] == '0' || b[i] == '1')
		{	
			ui *= 2;
			ui += b[i];
		}

		else
			return (0);
	
	}
		return (ui);
	}
			


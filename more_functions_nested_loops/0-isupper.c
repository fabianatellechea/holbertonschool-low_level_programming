#include "main.h"
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase character
 * @c: char
 * Return: 1 if c is uppercase or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

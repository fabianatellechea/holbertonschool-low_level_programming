#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: letter, lowercase or uppercase
 * Return: 1 if c is lowercase or uppercase
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

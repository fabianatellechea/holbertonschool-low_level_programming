#include "holberton.h"
/**
 * _islower - checks for lowercase characteres.
 *
 * Return: 0.
 */

int _islower(int c)
{ 
	if (c >= 'a' && c <= 'z')
	{ return (1); }
	else
	{ return (0); }
}

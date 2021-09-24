#include "main.h"
/**
 * _islower - checks for lowercase characteres.
 *
 *@c: character to be checked.
 * Return: if is lowercase return 1 otherwise return 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{ return (1); }
	else
	{ return (0); }
}

#include "main.h"
/**
 * _abs - computes the absolute value of an integer.
 * @i: int
 * Return: 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * (-1));
	}
	else
	{
		return (i);
	}
}

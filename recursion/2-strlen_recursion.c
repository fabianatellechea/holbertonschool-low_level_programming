#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: char
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{

		i += 1 + _strlen_recursion(s + 1);

		return (i);
	}

	return (0);
}

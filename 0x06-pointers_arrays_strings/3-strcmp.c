#include "holberton.h"
/**
  * _strcmp - compares two strings.
  * @s1: char1
  * @s2: char2
  *Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1[i] && s2[i] != '\0')
	{
		return (s1[i] - s2[i]);
		i++;
	}

	else

	return (0);
}


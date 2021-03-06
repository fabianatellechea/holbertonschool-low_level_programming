#include "holberton.h"
/**
  * _strcmp - compares two strings.
  * @s1: char1
  * @s2: char2
  *Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s2 > *s1)
			return ((*s2 - *s1) * -1);
		s1++;
		s2++;
	}
	return (0);

}


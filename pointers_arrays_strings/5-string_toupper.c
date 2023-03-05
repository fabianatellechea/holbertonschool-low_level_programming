#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: pointer
 * Return: s
 */

char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}

	return (s);
}

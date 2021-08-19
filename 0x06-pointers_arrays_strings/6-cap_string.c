#include "holberton.h"
/**
  *6-cap_string.c - capitalizes all words of a string
  *@s: string
  */

char *cap_string(char *s)
{
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		if (
			(*(s + i - 1) == ' ') || (*(s + i - 1) == '\t') ||
			(*(s + i - 1) == '\n') || (*(s + i - 1) == ',') ||
			(*(s + i - 1) == ';') || (*(s + i - 1) == '.') ||
			(*(s + i - 1) == '!') || (*(s + i - 1) == '?') ||
			(*(s + i - 1) == '"') || (*(s + i - 1) == '(') ||
			(*(s + i - 1) == ')') || (*(s + i - 1) == '{') ||
			(*(s + i - 1) == '}') || i == 0
			)
		{
			j = 1;
		}
		if (j == 1 && *(s + i) >= 97 && *(s + i) <= 122)
		{
			*(s + i) = *(s + i) - 32;
		}

		j = 0;
		i++;
	}

	return (s);
}

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that creates a pointer to a string copy
 * @str: string
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int i, length;
	char *p = NULL;

	if (str == NULL)
	{
		return (NULL);
	}
	if (str)
	{
		for (length = 0; str[length]; length++)
			;
		p = malloc(sizeof(char) * length + 1);
	}
	if (p)
	{
		for (i = 0; i < length; i++)
		{
			p[i] = str[i];
		}
	}

	return (p);
}

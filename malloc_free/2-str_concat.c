#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: pointer to a newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	int h, i, j, k, length;
	char *p = NULL;

	if (s1 == NULL)
        {
                s1 = "";
        }
        if (s2 == NULL)
        {
                s2 = "";
        }

	if (s1 && s2)
	{
		for (i = 0; s1[i]; i++)
			;
		for (j = 0; s2[j]; j++)
			;

		length = i + j;
		p = malloc(sizeof(char) * length + 1);
	}

	if (p)
	{
		k = 0;
		for (h = 0; h < i; h++)
		{
			p[h] = s1[h];
		}
		for (; h < length; h++)
		{
			p[h] = s2[k++];
		}
	}

	return (p);
}

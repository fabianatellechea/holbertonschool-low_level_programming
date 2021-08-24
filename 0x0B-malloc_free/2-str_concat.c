#include "holberton.h"
#include <stdlib.h>
/**
  *str_concat - function that concatenates two strings
  *@s1: string1
 *@s2: string2
 *Return: s1 y s2
 */

char *str_concat(char *s1, char *s2)
{
	char *p = NULL;
	int i = 0, j = 0, k = 0, m = 0;
	int len;

	if (s1)
	{
		for (i = 0; s1[i] != '\0'; i++)
			;
	}
	if (s2)
	{
		for (j = 0; s2[j] != '\0'; j++)
			;
	}
	len = i + j;
	p = malloc(sizeof(char) * len + 1);
	if (p)
	{
		for (; k < i; k++)
		{
			p[k] = s1[k];
		}
		for (; k < len; k++)
		{
			p[k] = s2[m];
			m++;
		}
	}
	return (p);
}

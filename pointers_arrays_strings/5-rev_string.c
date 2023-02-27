#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 *@s: string
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char aux;

	while (s[j + 1])
		j++;
	for (; i <= j; i++, j--)
	{
		aux = s[i];
		s[i] = s[j];
		s[j] = aux;
	}
}

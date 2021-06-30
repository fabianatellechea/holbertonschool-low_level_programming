#include "holberton.h"
/**
  * *_strcat - concatenates two strings
  *@dest - char1
  *@src - char2
  *Return: a pointer to the resulting string dest.
  */
char *_strcat(char *dest, char *src)
{
	char d = *dest;
	char s = *src;

	while (*(++d))
		;
	while (*(d++) = *(s++))
		;
	_putchar (d);
	return (0);
}




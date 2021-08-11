#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  *read_textfile - function that reads a text file and prints it.
  *@filename: nombre del archivo
  *@letters:the number of letters it should read and print
  *Return: the actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, x;
	char *m;

	m = malloc(sizeof(char) * letters);

	if (filename == NULL || m == NULL)
	{
		return (0);
	}

	o = open(filename, O_RDONLY);
	r = read(o, m, letters);
	x = write(STDOUT_FILENO, m, r);

	if (o == -1 || r == -1 || x == -1)
	{
		return (0);
	}

	close(o);
	return (x);
	free(m);
}

#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  *read_textfile - function that reads a text file and prints it
  *@filename: filename
  *@letters: number of letters of filename
  *Return: the actual number of letters it could read and print
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (filename == NULL || buffer == NULL)
	{
		return (0);
	}

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1)
	{
		return (0);
	}

	close(o);
	return (w);
	free(buffer);
}

#include "main.h"

/**
  *read_textfile - function that reads a text file and prints it.
  *
  *
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, x;
	char m;

	if (filename)
	{
		m = malloc(sizeof(char) * letters);
	if (m == NULL)
		return (0);

	o = open(filename, O_RDONLY)
	r = read(o, m, letters)
	x = write(STDOUT_FILENO, m, r)

	if (o == -1 || r == -1 || x != r)
	{
		return (0);
	}
	}
	free(m);
	return (c);
}

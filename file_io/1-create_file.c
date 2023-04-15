#include "main.h"

/**
  *create_file - function that creates a file
  *@filename: filename
  *@text_content: a NULL terminated string to write to the file
  *Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int o, w, i = 0;

	if (!filename)
	{
		return (-1);
	}

	if (text_content)
	{
		for (; text_content[i]; i++)
			;
	}

	if (!text_content)
	{
		o = open(filename, O_CREAT, 0600);
		return (1);
	}

	if (filename)
	{
		o = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		w = write(o, text_content, i);


		if (o == -1 || w == -1)

			return (-1);
	}

	close(o);
	return (1);
}

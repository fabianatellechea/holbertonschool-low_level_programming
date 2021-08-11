#include "main.h"

/**
  *append_text_to_file - function that appends text at the end of a file.
  *@filename: the name of the file to create
  *@text_content: is a NULL terminated string to write to the file
  *Return: 1 on success, -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, x, l;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content)
	{
		for (l = 0; text_content[l] != '\0'; l++)
			;
	}
	else
	{
		o = open(filename, O_CREAT, 0600);
		return (1);
	}

	if (filename)
	{
		o = open(filename, O_APPEND | O_WRONLY);
		x = write(o, text_content, l);


		if (o == -1 || x == -1)
			return (-1);
	}

	close(o);
	return (1);
}

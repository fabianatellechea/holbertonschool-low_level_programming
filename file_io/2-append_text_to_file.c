#include "main.h"

/**
  *append_text_to_file - function that appends text at the end of file
  *@filename: filename
  *@text_content: a NULL terminated string to write to the file
  *Return: 1 if the file exists and -1 if the file does not exist
  */

int append_text_to_file(const char *filename, char *text_content)
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
		o = open(filename, O_APPEND | O_WRONLY);
		w = write(o, text_content, i);


		if (o == -1 || w == -1)

			return (-1);
	}

	close(o);
	return (1);
}

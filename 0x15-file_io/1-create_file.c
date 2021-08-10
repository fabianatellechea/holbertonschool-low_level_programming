#include "main.h"

/**
  *create_file - 
  *@filename:the name of the file to create
  *@text_content:is a NULL terminated string to write to the file
  *Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int o, x, l;
	char *m;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content)
	{
		for (l = 0; text_content[l]; l++)
			;
	}
	else
	{
		o = open(filename, O_CREAT, 600);
		return (1);
	}

	if (filename)
	{	
		m = malloc(sizeof(char) * l);
		o = open(filename, O_CREAT, O_TRUNC, O_WRONLY, 600);
		x = write(o, text_content, l);
	}

	if (o == -1 || x == -1)
	{
		return (-1);
}
	free(m);
	close(o);
	return(1);
}

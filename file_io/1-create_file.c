#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_file - Creates a file.
 *@filename: A pointer to the name of the file to create
 *@text_content: A pointer to a string to write to the file. 
 *
 *Return: if the function fails - -1.
 *	otherwrite - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];) 
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(0);

	return (1);
}

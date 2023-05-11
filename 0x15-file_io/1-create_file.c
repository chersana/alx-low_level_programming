#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, written, text_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (text_len = 0; text_content[text_len];)
		text_len++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	written = write(file_descriptor, text_content, text_len);

	if (file_descriptor == -1 || bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

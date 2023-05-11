#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
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
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
	{
		return (-1);
	}
	written = write(file_descriptor, text_content, text_len);
	close(file_descriptor);

	if (written == -1)
	{
		return (-1);
	}
	return (1);
}

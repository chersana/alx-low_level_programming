#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: a file
 * @letters:  number of letters it should read and print
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t b_read;
	ssize_t written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	b_read = read(file_descriptor, buffer, letters);
	written = write(STDOUT_FILENO, buffer, b_read);

	free(buffer);
	close(file_descriptor);

	return (written);
}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads a test file and prints it to the POSIX standard output
 * @filename: The name of the file
 * @letters: The number of letters to read and print
 *
 * Return: The number of chars printed  if file name NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_written, bytes_read;
	char *buffer;
	FILE *file;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	bytes_read = fread(buffer, 1, letters, file);
	if (bytes_read <= 0)
	{
		fclose(file);
		free(buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	fclose(file);
	free(buffer);

	if (bytes_written != bytes_read)
	{
		return (0);
	}
	return (bytes_written);
}

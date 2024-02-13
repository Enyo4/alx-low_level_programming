#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>/* For POSIX functions */
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: File to be read
 * @letters: Number of letters to read
 *
 * Return: Actual number of letters it could read and print, or
 *		0 if file can not be opened or read or NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buf;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buf = (char *)malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(file);
		return (0);
	}

	bytes_read = read(file, buf, letters);
	if (bytes_read == -1)
	{
		close(file);
		free(buf);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(file);
		free(buf);
		return (0);
	}

	close(file);
	free(buf);
	return (bytes_written);
}

#include "main.h"
#include <stdlib.h>

/*
 * read_textfile - Reads a test file and prints it to th e POSIX standard output
 * @filename: The name of the file
 * @letters: The number of letters to read and print
 *
 * Return: The number of chars printed  if file name NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, readfd, writefd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	readfd = read(fd, buffer, letters);
	writefd = write(STDOUT_FILENO, buffer, readfd);
	if (fd == -1 || readfd == -1 || writefd == -1 || writefd != readfd)
		return (0);
	close(fd);
	return (writefd);
}

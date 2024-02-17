#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file to be created
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success or -1 if filename if NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, 0_RDWR

#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to dest
 * @dest: the destination
 * @src: the source file
 * @n: the number of bytes to copy
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (0);
}

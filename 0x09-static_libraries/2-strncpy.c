#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: The char to be copied to
 * @src: The string to be copied
 * @n: the number of lines to be copied
 *
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
			dest[i] = src[i];
	}
	
	dest[i] = '\0';
	return dest;
}	

#include "main.h"

/**
 * _strncat - Concatenates two strings with at most n bytes from src.
 * @src: source string that is concatenated
 * @dest: string where @src is added to
 * @n: number of lines to be added
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}

	while (src[d] != '\0' && s < n)
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';

	return (dest);
}

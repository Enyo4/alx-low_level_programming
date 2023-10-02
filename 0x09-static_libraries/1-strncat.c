#include "main.h"

/**
 * _strncat - Concatenates two strings with at most n bytes from src.
 * @src: source string that is concatenated
 * @dest: string where @src is added to
 * @n: The lengyh of the int
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, a;

	while (dest[d] != '\0')
	{
		d++;
	}

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[d + a] = src[a];
	}
	dest[d + a] = '\0';
	return (dest);
}

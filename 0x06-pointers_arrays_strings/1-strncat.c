#include "main.h"

/**
 * _strncat - Concatenates two strings with at most n bytes from src.
 * @src: source string that is concatenated
 * @dest: string where @src is added to
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, a = 0;
	
	while (dest[d] != '\0')
	{
		d++;
	}

	for (; a < n && src[a] != '\0'; a++)
	{
		dest[d] = src[a];
	}
	dest[d] = '\0';
	return (dest);
}

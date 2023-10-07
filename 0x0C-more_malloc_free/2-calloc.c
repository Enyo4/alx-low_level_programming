#include <stdlib.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: input pointer that represents memory
 *     block to fill
 * @b: characters to fill
 * @n: number of bytes to be filled
 *
 * Return: A pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - Allocates memory for an array, using malloc.
 * @nmemb: array size
 * @size: number of bytes of each element
 *
 * Return: pointer to allocated memory or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}

	/* set the allocated memory to zero */
	_memset(ptr, 0, total);

	return (ptr);
}

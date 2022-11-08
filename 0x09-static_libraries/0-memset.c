#include "main.h"

/**
 * _memset - fills the first n bytes of memory aree
 * @s: a pointer to the memory area to be filled
 * @n: Thr number of bytes to be filled
 * @b: character to fill the memory area with
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

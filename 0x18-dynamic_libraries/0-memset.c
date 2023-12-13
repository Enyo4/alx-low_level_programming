#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: a pointer to the given array
 * @b: the char to fill the array with
 * @n: the number of bytes allocated
 *
 * Return: A pointer to the memory area
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

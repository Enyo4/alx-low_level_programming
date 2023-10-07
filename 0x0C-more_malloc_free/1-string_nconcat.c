#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: Number of bytes to allocate
 *
 * Return: concatenated string or NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		continue;
	}

	c = malloc(sizeof(char) * (n + i + 1));
	if (c == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < i; k++)
	{
		c[k] = s1[k];
	}
	for (l = 0; l < n && s2[l] != '\0'; l++)
	{
		c[k] = s2[l];
		k++;
	}
	c[k] = '\0';
	return (c);
}

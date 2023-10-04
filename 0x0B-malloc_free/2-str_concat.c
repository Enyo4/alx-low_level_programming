#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: Second string
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int a, b, len, i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	len = i + j;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < i; a++)
	{
		s[a] = s1[a];
	}
	/* concatenate s2 to s */
	for (b = 0; b < j; b++)
	{
		s[a] = s2[b];
		a++;
	}
	s[len] = '\0';
	return (s);
}
